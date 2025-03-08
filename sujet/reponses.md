# Réponses aux questions du sujet du TP chomp

## Exercice 4

### Question 1

J'ai choisi de découper mon projet de la manière suivante :

- `src/` : le code source du projet
- `obj/` : les fichiers objets générés par le compilateur
- `src/` : le code source du projet
- `Makefile` : le fichier de configuration du projet

Dans chacun de ces répertoires se trouvent plusieurs modules :

- ``check` : le module de vérification générale qui va par exemple vérifier si le jeu est terminé si le coup est valide
- `graphics` : le module de gestion de l'affichage avec ncurses
- `gui` : le module de gestion de l'interaction avec l'utilisateur
- `moteur` : le module de gestion du moteur de jeu avec tous les sructures de données et enum ainsi que les fonctions qui intéragissent avec

### Question 4

Programmer en ayant un seul fichier peut être attrayant à première vue car cela nous évite tout le tracas de devoir gérer les inclusions entre fichiers, les dépendances, etc. Ainsi, la compilation est beaucoup plus simple et rapide.

Cependant, le fichier du projet devient vite illisible et il devient difficile de s'y retrouver dans le code, ce qui peut rendre la production de code plus lente et sujette à erreurs et rendre la coopération entre développeurs plus difficile.

Tandis que le découpage en module permet une meilleure organisation du code on sait quelle ligne de code fait quoi et où elle se trouve. De plus cela permet de rajouter des fonctionnalités plus facilement et de les tester indépendamment du reste du code. 
