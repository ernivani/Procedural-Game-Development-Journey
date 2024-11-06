# Global Makefile for building projects

# Default variables (can be overridden from the command line)
PROJECT ?= 1
CC ?= g++
TECH ?= sfml

# Determine the project directory based on the project number
PROJECT_DIR := $(wildcard $(shell printf "%02d" $(PROJECT))*)

# Check if PROJECT_DIR is empty
ifeq ($(PROJECT_DIR),)
    $(error Project directory not found for PROJECT=$(PROJECT))
endif

# Paths
SRC_DIR := $(PROJECT_DIR)/src
BUILD_DIR := $(PROJECT_DIR)/build
ASSETS_DIR := $(PROJECT_DIR)/assets

# Source files
SOURCES := $(wildcard $(SRC_DIR)/*.cpp)
# Object files
OBJECTS := $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SOURCES))

# Executable name
EXECUTABLE := $(BUILD_DIR)/$(notdir $(PROJECT_DIR))

# Compiler flags
CFLAGS := -Wall -I$(SRC_DIR)

# Libraries based on the technology used
ifeq ($(TECH), sfml)
    LIBS := -lsfml-graphics -lsfml-window -lsfml-system
    CFLAGS += -DSFML
else ifeq ($(TECH), sdl2)
    LIBS := -lSDL2 -lSDL2_image -lSDL2_ttf
    CFLAGS += -DSDL2
else
    LIBS :=
endif

# OS detection for compatibility
ifeq ($(OS),Windows_NT)
    RM := del /Q /F
    MKDIR := if not exist "$(BUILD_DIR)" mkdir "$(BUILD_DIR)"
    SEP := \\
    EXEC_EXT := .exe
    NULL_DEVICE := NUL
else
    RM := rm -f
    MKDIR := mkdir -p $(BUILD_DIR)
    SEP := /
    EXEC_EXT :=
    NULL_DEVICE := /dev/null
endif

.PHONY: all clean run

all: $(EXECUTABLE)$(EXEC_EXT)

$(EXECUTABLE)$(EXEC_EXT): $(OBJECTS)
	@echo "Linking $(notdir $(EXECUTABLE))$(EXEC_EXT)..."
	$(CC) $(CFLAGS) -o "$(EXECUTABLE)$(EXEC_EXT)" $(OBJECTS) $(LIBS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo "Compiling $<..."
	$(MKDIR)
	$(CC) $(CFLAGS) -c "$<" -o "$@"

clean:
	@echo "Cleaning build files in $(BUILD_DIR)..."
	-$(RM) "$(BUILD_DIR)$(SEP)*.o" "$(EXECUTABLE)$(EXEC_EXT)" > $(NULL_DEVICE) 2>&1

run: all
	@echo "Running $(notdir $(EXECUTABLE))$(EXEC_EXT)..."
	"$(EXECUTABLE)$(EXEC_EXT)"
