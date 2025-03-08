# Chomp

## Description du jeu

Chomp est un jeu de stratégie à deux joueurs. Le jeu se joue sur une tablette de chocolat rectangulaire composée de carrés de chocolat. Les joueurs prennent à tour de rôle un carré de chocolat et tous les carrés situés en dessous et à droite de celui-ci. Le but du jeu est d'éviter de prendre le carré de chocolat empoisonné situé en haut à gauche de la tablette.

## Règles du jeu

1. Le jeu se joue à deux joueurs.
2. La tablette de chocolat est composée de carrés de chocolat.
3. Les joueurs prennent à tour de rôle un carré de chocolat et tous les carrés situés en dessous et à droite de celui-ci.
4. Le joueur qui prend le carré de chocolat empoisonné situé en haut à gauche de la tablette perd la partie.

## Objectif du jeu

L'objectif du jeu est d'éviter de prendre le carré de chocolat empoisonné situé en haut à gauche de la tablette.

## Comment jouer

1. Lancez le jeu en suivant les instructions de compilation et d'exécution ci-dessous.
2. Le joueur 1 commence la partie.
3. Utilisez la souris pour sélectionner un carré de chocolat sur la tablette.
4. Cliquez sur le carré de chocolat sélectionné pour le prendre ainsi que tous les carrés situés en dessous et à droite de celui-ci.
5. Le joueur suivant prend son tour.
6. Le jeu continue jusqu'à ce qu'un joueur prenne le carré de chocolat empoisonné situé en haut à gauche de la tablette.

## Instructions de compilation et d'exécution

### Compilation

Pour compiler le jeu, utilisez le `makefile` :

```sh
make tout
```

### Exécution

Pour exécuter le jeu, lancez le programme compilé :

```sh
make lancer
```

### Commandes disponibles

- `make tout` : compile le programme
- `make lancer` : lance le programme
- `make clean` : supprime les fichiers compilés
- `make aide` : affiche l'aide

## Contrôles et interface utilisateur

- Utilisez la souris pour sélectionner un carré de chocolat sur la tablette.
- Cliquez sur le carré de chocolat sélectionné pour le prendre ainsi que tous les carrés situés en dessous et à droite de celui-ci.
- Appuyez sur la touche "q" pour quitter le jeu à tout moment.
