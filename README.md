# Chomp

## Game Description

Chomp is a two-player strategy game. The game is played on a rectangular chocolate bar made up of chocolate squares. Players take turns taking a chocolate square and all the squares below and to the right of it. The goal of the game is to avoid taking the poisoned chocolate square located at the top left of the bar.

## Game Rules

1. The game is played by two players.
2. The chocolate bar is made up of chocolate squares.
3. Players take turns taking a chocolate square and all the squares below and to the right of it.
4. The player who takes the poisoned chocolate square located at the top left of the bar loses the game.

## Game Objective

The objective of the game is to avoid taking the poisoned chocolate square located at the top left of the bar.

## How to Play

1. Start the game by following the compilation and execution instructions below.
2. Player 1 starts the game.
3. Use the mouse to select a chocolate square on the bar.
4. Click on the selected chocolate square to take it and all the squares below and to the right of it.
5. The next player takes their turn.
6. The game continues until a player takes the poisoned chocolate square located at the top left of the bar.

## Compilation and Execution Instructions

### Compilation

To compile the game, use the `makefile`:

```sh
make tout
```

### Execution

To run the game, launch the compiled program:

```sh
make lancer
```

### Available Commands

- `make tout` : compiles the program
- `make lancer` : runs the program
- `make clean` : removes the compiled files
- `make aide` : displays the help

## Controls and User Interface

- Use the mouse to select a chocolate square on the bar.
- Click on the selected chocolate square to take it and all the squares below and to the right of it.
- Press the "q" key to quit the game at any time.

## Additional Explanations

### Game Strategy

- The game requires strategic thinking to avoid taking the poisoned chocolate square.
- Players should try to force their opponent into a position where they have no choice but to take the poisoned square.

### Visual Aids

- The game interface uses colors to differentiate between existing and taken chocolate squares.
- The current player is displayed at the top of the screen.
- The score and match information are displayed on the right side of the screen.

### Troubleshooting

- If the game does not compile, ensure that all necessary libraries (e.g., ncurses) are installed.
- If the game does not run, check for any error messages and ensure that the compiled program is in the correct directory.
