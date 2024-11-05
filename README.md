# Procedural Galaxy Explorer

Welcome to **Procedural Galaxy Explorer**! This repository is a journey through procedural generation, culminating in a procedurally generated space exploration game where each solar system is generated from a unique seed. Along the way, we’ll build and showcase projects focused on procedural techniques and game mechanics.

## Overview

This project aims to create a procedurally generated universe with explorable solar systems, planets, and biomes. Each folder represents a step in development, from basic procedural generation principles to advanced techniques used in space exploration games.

## Project Phases

Each folder in the repository contains one development phase. Below are detailed descriptions for each project, including specs, recommended tools, skills gained, and a to-do list for tracking progress.

---

### 1. **01_terrain_generation**

**Description**: Create a 2D landscape using Perlin noise to generate rolling hills or mountains.

**Specs**:

-   Generate a simple height map using Perlin noise.
-   Render the height map as a scrolling terrain in 2D.
-   Implement basic user controls to move across the terrain.

**Engine/Language**:

-   **Option 1**: **SFML** or **SDL** with **C++** for low-level control.
-   **Option 2**: **Unity** with **C#** for faster setup and built-in tools.

**Skills Gained**:

-   Understanding of noise functions (Perlin noise).
-   Basics of procedural content generation.
-   Rendering 2D graphics and handling user input.

**To-Do List**:

-   [ ] Set up the development environment (install SFML/SDL or Unity).
-   [ ] Implement Perlin noise function for generating height maps.
-   [ ] Render the generated terrain on screen.
-   [ ] Add scrolling functionality to move across the terrain.
-   [ ] Implement basic user controls (e.g., left/right movement).
-   [ ] Test and debug the terrain generation and rendering.

---

### 2. **02_dungeon_generator**

**Description**: Develop a dungeon generator that creates a new dungeon layout each time with rooms and corridors.

**Specs**:

-   Use algorithms like Binary Space Partitioning (BSP) or cellular automata.
-   Generate interconnected rooms and corridors.
-   Ensure that the dungeon is fully traversable.

**Engine/Language**:

-   **Option 1**: **Unity** with **C#**.
-   **Option 2**: **Godot** with **GDScript** or **C#**.

**Skills Gained**:

-   Procedural dungeon generation techniques.
-   Understanding of spatial partitioning.
-   Managing data structures for rooms and corridors.

**To-Do List**:

-   [ ] Research dungeon generation algorithms (BSP, cellular automata).
-   [ ] Implement the chosen algorithm to generate room layouts.
-   [ ] Create corridors connecting the rooms.
-   [ ] Visualize the dungeon layout on screen.
-   [ ] Ensure that all rooms are accessible (pathfinding checks).
-   [ ] Add player movement to navigate the dungeon.

---

### 3. **03_biomes_in_2d**

**Description**: Generate a 2D map with different biomes like forests, deserts, and lakes, based on Perlin noise.

**Specs**:

-   Use noise values to assign biomes to different regions.
-   Implement smooth transitions between biomes.
-   Add visual representations for each biome type.

**Engine/Language**:

-   **Unity** with **C#**.
-   **Godot** with **GDScript**.

**Skills Gained**:

-   Advanced use of noise functions for multiple layers.
-   Biome assignment and blending techniques.
-   Enhanced 2D rendering skills.

**To-Do List**:

-   [ ] Implement multi-layered Perlin noise for biome distribution.
-   [ ] Define thresholds for different biomes based on noise values.
-   [ ] Create or import assets representing each biome.
-   [ ] Render the biomes on a 2D map.
-   [ ] Ensure smooth transitions between different biomes.
-   [ ] Test biome distribution for randomness and diversity.

---

### 4. **04_infinite_world**

**Description**: Create a 2D infinite side-scroller with randomly generated terrain and obstacles.

**Specs**:

-   Implement chunk-based world generation.
-   Use Perlin noise for terrain variation.
-   Load and unload chunks dynamically as the player moves.

**Engine/Language**:

-   **Unity** with **C#**.
-   **SFML** with **C++** for more control.

**Skills Gained**:

-   Infinite world generation techniques.
-   Memory management for loading/unloading assets.
-   Advanced procedural content generation.

**To-Do List**:

-   [ ] Design the chunk system for the infinite world.
-   [ ] Implement dynamic loading and unloading of chunks.
-   [ ] Use Perlin noise to generate terrain within each chunk.
-   [ ] Add obstacles and items procedurally.
-   [ ] Optimize performance to prevent lag or stuttering.
-   [ ] Test infinite scrolling in both directions.

---

### 5. **05_3d_terrain_generation**

**Description**: Create a basic 3D landscape using height maps generated from Perlin noise.

**Specs**:

-   Generate a 3D terrain mesh based on height map data.
-   Apply textures and lighting to enhance visual quality.
-   Implement basic camera controls to explore the terrain.

**Engine/Language**:

-   **Unity** with **C#**.
-   **Godot** with **GDScript** or **C#**.

**Skills Gained**:

-   3D procedural terrain generation.
-   Mesh manipulation and rendering.
-   Basic 3D camera and lighting setups.

**To-Do List**:

-   [ ] Implement Perlin noise for generating height maps.
-   [ ] Create a terrain mesh based on the height map.
-   [ ] Apply textures to the terrain (e.g., grass, rock).
-   [ ] Set up lighting to enhance depth perception.
-   [ ] Implement camera controls for terrain exploration.
-   [ ] Optimize mesh generation for performance.

---

### 6. **06_procedural_solar_system**

**Description**: Build a basic model of a solar system where each planet’s size, orbit, and color are procedurally generated.

**Specs**:

-   Generate planets with random attributes based on seeds.
-   Implement orbital mechanics for planet movement.
-   Allow user interaction to select and view planets.

**Engine/Language**:

-   **Unity** with **C#**.
-   **Godot** with **GDScript**.

**Skills Gained**:

-   Procedural object generation.
-   Understanding basic orbital physics.
-   User interface for selecting and viewing objects.

**To-Do List**:

-   [ ] Develop a system to generate planet attributes procedurally.
-   [ ] Implement orbital mechanics for planet movement.
-   [ ] Render the solar system with planets and orbits.
-   [ ] Add user controls to select and zoom into planets.
-   [ ] Display planet information (e.g., size, distance from the sun).
-   [ ] Test the procedural generation for uniqueness and variety.

---

### 7. **07_planet_surface_generation**

**Description**: Develop procedural terrain generation for planet surfaces, allowing zoom from orbit to surface.

**Specs**:

-   Use multi-octave noise functions for detailed terrain.
-   Implement level-of-detail (LOD) to manage performance.
-   Allow seamless transition from space view to planet surface.

**Engine/Language**:

-   **Unity** with **C#**.
-   **Unreal Engine** with **C++**.

**Skills Gained**:

-   Advanced noise functions and terrain detail.
-   LOD techniques for rendering efficiency.
-   Handling scale transitions in 3D space.

**To-Do List**:

-   [ ] Implement detailed terrain generation for planets.
-   [ ] Develop LOD system to adjust detail based on distance.
-   [ ] Create seamless zoom functionality from orbit to surface.
-   [ ] Optimize performance to handle high-detail terrains.
-   [ ] Test transitions for smoothness and visual consistency.
-   [ ] Add basic surface features (e.g., mountains, craters).

---

### 8. **08_planet_biome_simulation**

**Description**: Create diverse biomes on a planetary scale with seamless transitions based on climate zones.

**Specs**:

-   Assign biomes based on latitude, altitude, and other factors.
-   Implement biome-specific terrain features and vegetation.
-   Enhance visual variety across the planet's surface.

**Engine/Language**:

-   **Unity** with **C#**.
-   **Unreal Engine** with **C++**.

**Skills Gained**:

-   Complex biome generation algorithms.
-   Procedural placement of vegetation and features.
-   Integration of multiple procedural systems.

**To-Do List**:

-   [ ] Define biome types and their characteristics.
-   [ ] Implement biome assignment logic based on planetary data.
-   [ ] Generate biome-specific terrain features.
-   [ ] Add procedural vegetation and objects.
-   [ ] Ensure smooth transitions between biomes.
-   [ ] Test for diversity and realism in biome distribution.

---

### 9. **09_galaxy_generator**

**Description**: Generate an entire galaxy with star systems, each containing procedurally generated planets.

**Specs**:

-   Create a galaxy map with navigable star systems.
-   Implement data structures to manage numerous systems.
-   Allow for exploration and selection of different systems.

**Engine/Language**:

-   **Unity** with **C#**.
-   **Unreal Engine** with **C++**.

**Skills Gained**:

-   Large-scale procedural content management.
-   Data optimization and memory management.
-   Inter-system navigation mechanics.

**To-Do List**:

-   [ ] Design the galaxy generation algorithm.
-   [ ] Implement data structures for star systems and planets.
-   [ ] Render the galaxy map with selectable systems.
-   [ ] Enable travel between star systems.
-   [ ] Optimize loading and unloading of system data.
-   [ ] Test galaxy generation for variety and performance.

---

### 10. **10_solar_system_exploration_game**

**Description**: Develop a full game where players explore procedurally generated solar systems and planets.

**Specs**:

-   Integrate all previous systems into a cohesive game.
-   Implement gameplay mechanics (exploration, resource collection).
-   Add user interfaces, menus, and game settings.

**Engine/Language**:

-   **Unity** with **C#**.
-   **Unreal Engine** with **C++**.

**Skills Gained**:

-   Game design and implementation.
-   Systems integration and testing.
-   User experience and interface design.

**To-Do List**:

-   [ ] Integrate solar system and planet generation systems.
-   [ ] Develop core gameplay mechanics (e.g., movement, interaction).
-   [ ] Implement UI elements (menus, HUD, settings).
-   [ ] Add audio effects and music for immersion.
-   [ ] Conduct extensive testing and debugging.
-   [ ] Prepare the game for release (builds, packaging).

---

## Getting Started

To start exploring the projects, clone the repository and follow instructions in each project folder.

```bash
git clone https://github.com/ernivnai/Procedural-Game-Development-Journey.git
cd procedural-galaxy-explorer
```

## Contributing

We welcome contributions! Please read [CONTRIBUTING.md](CONTRIBUTING.md) for information on our code of conduct and guidelines for submitting contributions.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
