# Project Overview

![image_alt](https://github.com/Artist06/BuildOpsCpp/blob/master/game_image.png?raw=true)

### Aim

The BuildOps project is a business simulation/tycoon game designed to provide an engaging and educational experience. The primary goal is to allow players to manage a technology company by combining traditional management gameplay with programming mechanics. Players can:

- Build and customize office spaces.
- Hire and program AI workers to perform tasks.
- Manage finances through investments, loans, and expenditures.
- Progress through a skill tree system to unlock upgrades.
- Compete in a simulated stock market to grow their company.

The game also introduces players to basic programming concepts through a custom interpreter and a proprietary Instruction Set Architecture (ISA), making it both entertaining and educational.

---

### Implementation

#### Core Features

![image_alt](https://github.com/Artist06/BuildOpsCpp/blob/master/worker_image.png?raw=true)
1. **Grid System**:

   - The office environment is represented as a grid, where each cell can have a specific purpose (e.g., work area, lunch area, reception).
   - A maze generator is used to initialize the grid layout, ensuring variety and replayability.
2. **Worker Management**:

   - Players can hire workers with different specializations (e.g., software developers, hardware developers, network engineers).
   - Workers have programmable behaviors, allowing players to write custom code to control their actions.
   - Workers perform tasks like working, eating, and moving, which impact their energy, productivity, and the company’s revenue.
3. **Financial System**:

   - Includes banking features like investments, forward deposits, and loans.
   - Players can earn money through worker productivity and manage expenses for hiring, purchasing areas, and upgrades.
4. **Skill Tree**:

   - A progression system that allows players to unlock upgrades and improve worker efficiency.
   - Nodes in the skill tree have costs and prerequisites, encouraging strategic planning.
5. **Stock Market**:

   - Simulates market conditions (e.g., competitive, monopoly, oligopoly).
   - Tracks player and competitor stock performance, adding a layer of competition.
6. **Custom Interpreter**:

   - A proprietary programming language defined by an ISA was developed for this project.
   - The interpreter processes worker code line-by-line, enabling players to program worker behaviors like working, eating, and moving.
7. **UI and Graphics**:

   - Built using Raylib for rendering.
   - Includes interactive screens for coding, hiring, shopping, and skill tree navigation.

![image_alt](https://github.com/Artist06/BuildOpsCpp/blob/master/map_stocks.png?raw=true)

![image_alt](https://github.com/Artist06/BuildOpsCpp/blob/master/bank_image.png?raw=true)

---

### Tech Stack

- **Programming Language**: C++
- **Graphics Library**: Raylib
- **Custom Components**:
  - Custom interpreter for worker programming.
  - Maze generator for grid initialization.
- **Assets**:
  - Fonts: `dina10px.ttf`, `dina10pxbold.ttf`
  - Sprites: Custom-designed images for office tiles, bank icons, and more.
- **File Management**:
  - Templates for worker code stored in `.txt` files.
  - Names for workers sourced from `femalenames.txt` and `malenames.txt`.

---

### Key Highlights

![image_alt](https://github.com/Artist06/BuildOpsCpp/blob/master/isa_image.png?raw=true)

1. **Custom Interpreter and ISA**:

   - The game features a custom-built interpreter that allows players to program worker behavior using a proprietary Instruction Set Architecture (ISA).
   - The ISA includes instructions for movement, task execution, and decision-making, providing players with granular control over worker actions.
2. **Educational Value**:

   - By integrating programming mechanics, the game introduces players to basic coding concepts in a fun and interactive way.
   - The in-game code editor includes features like syntax highlighting, error reporting, and template management.
3. **Strategic Depth**:

   - Players must balance worker productivity, financial management, and skill tree progression to succeed.
   - The stock market and competitive elements add an additional layer of strategy.
4. **Replayability**:

   - The use of a maze generator for grid initialization ensures that each playthrough offers a unique experience.
   - The skill tree and stock market mechanics encourage players to experiment with different strategies.

---

### Summary

BuildOps is a unique blend of programming education and business simulation. It provides players with the tools to manage a company while learning basic programming concepts through an engaging and interactive environment. The combination of a custom interpreter, strategic gameplay, and educational value makes it a standout project in the simulation genre.

---
