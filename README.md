# Procedural Game Development

Welcome to **Procedural Game Development**! This repository is a journey through procedural generation, culminating in a procedurally generated space exploration game where each solar system is generated from a unique seed. Along the way, we’ll build and showcase projects focused on procedural techniques and game mechanics.

## Overview

This project aims to create a procedurally generated universe with explorable solar systems, planets, and biomes. Each folder represents a step in development, from basic procedural generation principles to advanced techniques used in space exploration games.

## Project Phases

Each folder in the repository contains one development phase. Below are detailed descriptions for each project, including specs, recommended tools, skills gained, and links to the project's local documentation.

---

### 1. **[01_terrain_generation](01_terrain_generation/)**

**Description**: Create a 2D landscape using Perlin noise to generate rolling hills or mountains.

**Specs**:

- Generate a simple height map using Perlin noise.
- Render the height map as a scrolling terrain in 2D.
- Implement basic user controls to move across the terrain.

**Engine/Language**:

- **Option 1**: **SFML** or **SDL** with **C++** for low-level control.
- **Option 2**: **Unity** with **C#** for faster setup and built-in tools.

**Skills Gained**:

- Understanding of noise functions (Perlin noise).
- Basics of procedural content generation.
- Rendering 2D graphics and handling user input.

**Documentation**:

- [Project README](01_terrain_generation/README.md)
- [To-Do List](01_terrain_generation/TODO.md)

---

### 2. **[02_dungeon_generator](02_dungeon_generator/)**

**Description**: Develop a dungeon generator that creates a new dungeon layout each time with rooms and corridors.

**Specs**:

- Use algorithms like Binary Space Partitioning (BSP) or cellular automata.
- Generate interconnected rooms and corridors.
- Ensure that the dungeon is fully traversable.

**Engine/Language**:

- **Option 1**: **Unity** with **C#**.
- **Option 2**: **Godot** with **GDScript** or **C#**.

**Skills Gained**:

- Procedural dungeon generation techniques.
- Understanding of spatial partitioning.
- Managing data structures for rooms and corridors.

**Documentation**:

- [Project README](02_dungeon_generator/README.md)
- [To-Do List](02_dungeon_generator/TODO.md)

---

### 3. **[03_biomes_in_2d](03_biomes_in_2d/)**

**Description**: Generate a 2D map with different biomes like forests, deserts, and lakes, based on Perlin noise.

**Specs**:

- Use noise values to assign biomes to different regions.
- Implement smooth transitions between biomes.
- Add visual representations for each biome type.

**Engine/Language**:

- **Unity** with **C#**.
- **Godot** with **GDScript**.

**Skills Gained**:

- Advanced use of noise functions for multiple layers.
- Biome assignment and blending techniques.
- Enhanced 2D rendering skills.

**Documentation**:

- [Project README](03_biomes_in_2d/README.md)
- [To-Do List](03_biomes_in_2d/TODO.md)

---

### 4. **[04_infinite_world](04_infinite_world/)**

**Description**: Create a 2D infinite side-scroller with randomly generated terrain and obstacles.

**Specs**:

- Implement chunk-based world generation.
- Use Perlin noise for terrain variation.
- Load and unload chunks dynamically as the player moves.

**Engine/Language**:

- **Unity** with **C#**.
- **SFML** with **C++** for more control.

**Skills Gained**:

- Infinite world generation techniques.
- Memory management for loading/unloading assets.
- Advanced procedural content generation.

**Documentation**:

- [Project README](04_infinite_world/README.md)
- [To-Do List](04_infinite_world/TODO.md)

---

### 5. **[05_3d_terrain_generation](05_3d_terrain_generation/)**

**Description**: Create a basic 3D landscape using height maps generated from Perlin noise.

**Specs**:

- Generate a 3D terrain mesh based on height map data.
- Apply textures and lighting to enhance visual quality.
- Implement basic camera controls to explore the terrain.

**Engine/Language**:

- **Unity** with **C#**.
- **Godot** with **GDScript** or **C#**.

**Skills Gained**:

- 3D procedural terrain generation.
- Mesh manipulation and rendering.
- Basic 3D camera and lighting setups.

**Documentation**:

- [Project README](05_3d_terrain_generation/README.md)
- [To-Do List](05_3d_terrain_generation/TODO.md)

---

### 6. **[06_procedural_solar_system](06_procedural_solar_system/)**

**Description**: Build a basic model of a solar system where each planet’s size, orbit, and color are procedurally generated.

**Specs**:

- Generate planets with random attributes based on seeds.
- Implement orbital mechanics for planet movement.
- Allow user interaction to select and view planets.

**Engine/Language**:

- **Unity** with **C#**.
- **Godot** with **GDScript**.

**Skills Gained**:

- Procedural object generation.
- Understanding basic orbital physics.
- User interface for selecting and viewing objects.

**Documentation**:

- [Project README](06_procedural_solar_system/README.md)
- [To-Do List](06_procedural_solar_system/TODO.md)

---

### 7. **[07_planet_surface_generation](07_planet_surface_generation/)**

**Description**: Develop procedural terrain generation for planet surfaces, allowing zoom from orbit to surface.

**Specs**:

- Use multi-octave noise functions for detailed terrain.
- Implement level-of-detail (LOD) to manage performance.
- Allow seamless transition from space view to planet surface.

**Engine/Language**:

- **Unity** with **C#**.
- **Unreal Engine** with **C++**.

**Skills Gained**:

- Advanced noise functions and terrain detail.
- LOD techniques for rendering efficiency.
- Handling scale transitions in 3D space.

**Documentation**:

- [Project README](07_planet_surface_generation/README.md)
- [To-Do List](07_planet_surface_generation/TODO.md)

---

### 8. **[08_planet_biome_simulation](08_planet_biome_simulation/)**

**Description**: Create diverse biomes on a planetary scale with seamless transitions based on climate zones.

**Specs**:

- Assign biomes based on latitude, altitude, and other factors.
- Implement biome-specific terrain features and vegetation.
- Enhance visual variety across the planet's surface.

**Engine/Language**:

- **Unity** with **C#**.
- **Unreal Engine** with **C++**.

**Skills Gained**:

- Complex biome generation algorithms.
- Procedural placement of vegetation and features.
- Integration of multiple procedural systems.

**Documentation**:

- [Project README](08_planet_biome_simulation/README.md)
- [To-Do List](08_planet_biome_simulation/TODO.md)

---

### 9. **[09_galaxy_generator](09_galaxy_generator/)**

**Description**: Generate an entire galaxy with star systems, each containing procedurally generated planets.

**Specs**:

- Create a galaxy map with navigable star systems.
- Implement data structures to manage numerous systems.
- Allow for exploration and selection of different systems.

**Engine/Language**:

- **Unity** with **C#**.
- **Unreal Engine** with **C++**.

**Skills Gained**:

- Large-scale procedural content management.
- Data optimization and memory management.
- Inter-system navigation mechanics.

**Documentation**:

- [Project README](09_galaxy_generator/README.md)
- [To-Do List](09_galaxy_generator/TODO.md)

---

### 10. **[10_solar_system_exploration_game](10_solar_system_exploration_game/)**

**Description**: Develop a full game where players explore procedurally generated solar systems and planets.

**Specs**:

- Integrate all previous systems into a cohesive game.
- Implement gameplay mechanics (exploration, resource collection).
- Add user interfaces, menus, and game settings.

**Engine/Language**:

- **Unity** with **C#**.
- **Unreal Engine** with **C++**.

**Skills Gained**:

- Game design and implementation.
- Systems integration and testing.
- User experience and interface design.

**Documentation**:

- [Project README](10_solar_system_exploration_game/README.md)
- [To-Do List](10_solar_system_exploration_game/TODO.md)

---

## Getting Started

To start exploring the projects, clone the repository and follow instructions in each project folder.

```bash
git clone https://github.com/ernivnai/Procedural-Game-Development-Journey.git
cd Procedural-Game-Development-Journey
```

## Building the Projects

A global `Makefile` is provided at the root of the repository to compile and run the projects using specified settings such as the compiler and technology (e.g., SFML or SDL2).

### Prerequisites

- **Compiler**: Ensure you have a C++ compiler installed (e.g., `gcc`, `g++`, or `clang`).
- **Libraries**: Depending on the project, you may need to install additional libraries:
  - **SFML**: Simple and Fast Multimedia Library.
  - **SDL2**: Simple DirectMedia Layer.

### Using the Makefile

The Makefile allows you to compile and run each project by specifying the project number, compiler, and technology.

#### Makefile Commands

- **Compile a Project**

  ```bash
  make PROJECT=<project_number> CC=<compiler> TECH=<technology>
  ```

  For example, to compile Project 1 using `g++` and `sfml`:

  ```bash
  make PROJECT=1 CC=g++ TECH=sfml
  ```

- **Run a Project**

  ```bash
  make run PROJECT=<project_number> CC=<compiler> TECH=<technology>
  ```

  Example:

  ```bash
  make run PROJECT=1 CC=g++ TECH=sfml
  ```

- **Clean Build Files**

  ```bash
  make clean PROJECT=<project_number>
  ```

  Example:

  ```bash
  make clean PROJECT=1
  ```

#### Explanation of Variables

- `PROJECT`: The project number to compile (e.g., `1` for Project 1).
- `CC`: The compiler to use (e.g., `gcc`, `g++`, `clang`).
- `TECH`: The technology or library used in the project (`sfml`, `sdl2`, etc.).

### Notes

- **Project Structure**: Each project should follow the specified directory structure, with source code in the `src` folder and assets in the `assets` folder.
- **Build Output**: The compiled binaries and object files will be placed in the `build` directory within each project folder.
- **Cross-Platform Compatibility**: The Makefile is designed to work on both Windows and Linux systems.
- **Dependencies**: Ensure all required libraries are installed and accessible to the compiler.

### Installing Dependencies

#### On Linux

- **SFML**:

  ```bash
  sudo apt-get install libsfml-dev
  ```

- **SDL2**:

  ```bash
  sudo apt-get install libsdl2-dev libsdl2-image-dev libsdl2-ttf-dev
  ```

#### On Windows

- **SFML** and **SDL2**: Download and install the libraries from their official websites. You may need to adjust the compiler flags and include/library paths in the Makefile or project configuration.

### Troubleshooting

If you encounter any errors during compilation or execution, ensure that:

- The correct libraries are installed and properly linked.
- The compiler and technology variables are correctly specified.
- The project number corresponds to an existing project directory.

For additional assistance, feel free to open an issue on the repository or consult the documentation for the specific libraries and tools used.

## Contributing

We welcome contributions! Please read [CONTRIBUTING.md](CONTRIBUTING.md) for information on our code of conduct and guidelines for submitting contributions.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
