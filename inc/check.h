#ifndef CHECK_H
#define CHECK_H
#include "moteur.h"

/**
 * @brief Vérifie si un coup est légal dans le sens où le carré de chocolat correspondant au coup existe et n'a pas déjà été mangé.
 * @param EtatJeu L'état du jeu.
 * @param Coup Le coup à vérifier.
 */
int est_legal(EtatJeu, Coup);

/**
 * @brief Vérifie si le jeu est terminé et si c'est le cas renvoie 1 et affecte à la variable pointé par le pointeur gagnant le joueur gagnant sinon renvoie 0.
 * @param EtatJeu L'état du jeu.
 * @param Joueur* Le joueur gagnant.
 */
int est_jeu_termine(EtatJeu, Joueur*);

/**
 * @brief Renvoie le joueur ayant gagné.
 * @param int Le score du joueur 1.
 * @param int Le score du joueur 2.
 * @return Le joueur gagnant.
 */
Joueur victoire(int, int);

#endif // CHECK_H