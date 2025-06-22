# Chomp

This document introduces the Chomp game system, explaining what it is, its core gameplay mechanics, and key technical features. It provides a foundation for understanding the codebase architecture and game implementation.

For detailed gameplay rules and mechanics, see "Game Rules and Mechanics" (if available in another section). For information about running the game, see "Getting Started". For technical implementation details, see "System Architecture and Core Modules".

## What is Chomp

Chomp is a terminal-based implementation of the classic two-player strategy game played on a chocolate bar grid. The system is built as a modular C application using `ncurses` for console-based graphics and mouse interaction.

The game implements a tournament structure where multiple matches are played with cumulative scoring, rather than single standalone games. Players interact through mouse clicks on a visual chocolate bar grid displayed in the terminal.

### Core Game Concept:

* 8x16 chocolate bar grid represented by the `Tablette` data structure
* Two players (`JOUEUR_1` and `JOUEUR_2`) take alternating turns
* Each move (`Coup`) removes a selected square and all squares below and to the right
* The poisoned square at position `[0][0]` determines the loser
* Tournament scoring across multiple matches

## System Architecture Overview

### Module Organization in Code:

| Module      | File            | Primary Functions                   | Purpose                            |
| :---------- | :-------------- | :---------------------------------- | :--------------------------------- |
| `moteur`    | `src/moteur.c`  | `joueur_coup()`, `manger()`, `adversaire()` | Core game logic and state management |
| `gui`       | `src/gui.c`     | `lire_coup()`                       | Mouse and keyboard input handling  |
| `graphics`  | `src/graphics.c`| `afficher_tablette()`, `afficher_gagnant()` | ncurses-based display rendering    |
| `check`     | `src/check.c`   | `est_legal()`, `est_jeu_termine()`  | Move validation and game state checking |

## Game State and Data Flow

### Data Structure Relationships:

* `EtatJeu` serves as the central game state container.
* `Tablette` represents the 8x16 chocolate bar as a 2D integer array.
* `Coup` structure contains `ligne` and `colonne` coordinates for player moves.
* `Joueur` enum alternates between `JOUEUR_1` and `JOUEUR_2`.

The `manger()` function implements the core "eating" mechanic that removes the selected square and all squares below and to the right of it.

## Core Gameplay Mechanics

### Move Processing and Validation

* **Validation Logic:** The `est_legal()` function in the `check` module validates that:
    * The selected coordinates are within the 8x16 grid bounds.
    * The selected square has not already been eaten (removed).
    * The move follows the game's constraint rules.
* **Move Application:** The `joueur_coup()` function coordinates the move execution by:
    * Calling `manger()` to remove the selected square and dependent squares.
    * Using `adversaire()` to switch the current player.
    * Updating the `EtatJeu` structure with the new game state.

## Tournament Structure and Scoring

The system implements a tournament format with multiple matches and cumulative scoring:

### Tournament Features:

* Multiple matches played in sequence (`NB_MATCHES` constant).
* Score tracking for both players (`score_j1`, `score_j2`).
* Match winner determination after each game.
* Overall tournament winner based on cumulative scores.
* Board reset between matches while preserving scores.

The main game loop in `src/main.c` orchestrates the tournament by managing match progression, score accumulation, and final winner determination.

## User Interface and Controls

### Terminal-Based Interface

The system uses the `ncurses` library for console-based graphics with mouse support.

### Input Methods:

* Mouse clicking for square selection and move execution.
* Keyboard input for game control (`'q'` key to quit).
* Coordinate translation from mouse position to grid coordinates.

### Visual Feedback:

* Color differentiation between available and eaten chocolate squares.
* Current player display at the top of the screen.
* Real-time score and match information on the right side.
* Winner announcement display after each match.

### Display Functions:

* `afficher_tablette()` renders the chocolate bar grid.
* `afficher_gagnant()` shows match winner.
* Color-coded visual representation of game state changes.

## Build and Execution System

### Compilation Targets

The `Makefile` provides several build targets for different operations:

| Command        | Target      | Purpose                                   |
| :------------- | :---------- | :---------------------------------------- |
| `make tout`    | Compilation | Compiles all source files to create executable |
| `make lancer`  | Execution   | Runs the compiled `chomp` program         |
| `make clean`   | Cleanup     | Removes object files and executables      |
| `make aide`    | Help        | Displays available make targets           |

### Alternative Build:

The system also includes `compilation.sh` as an alternative build script for environments where `make` is not available.

### Dependencies:

* `ncurses` library for terminal interface functionality.
* GCC compiler for C compilation.
