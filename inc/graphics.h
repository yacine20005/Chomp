#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "moteur.h"
#include "check.h"

#define LIGNE_DEBUT (LINES / 2 - (NB_LIGNES / 2))
#define COLONNE_DEBUT (COLS / 2 - (NB_COLONNES / 2))

/**
 * @brief Initialise tout ce qui est nécessaire pour la fenêtre ncurses.
 */
void initier_ncurses();

/**
 * @brief Initialise les couleurs pour la fenêtre ncurses.
 */
void initier_couleurs();

/**
 * @brief Affiche sur la fenêtre ncurses le joueur courant.
 * @param etat etat actuelle du jeu
 */
void afficher_joueur(EtatJeu);

/**
 * @brief Affiche sur la fenêtre ncurses la tablette de chocolat du jeu.
 * @param etat etat actuelle du jeu
 */
void afficher_tablette(EtatJeu);

/**
 * @brief Affiche un carré de chocolat sur la fenêtre ncurses.
 * @param existe 1 si le carré de chocolat existe, 0 sinon.
 * @param ligne La ligne où afficher le carré de chocolat.
 * @param colonne La colonne où afficher le carré de chocolat.
 */
void afficher_chocolat(int, int, int);

/**
 * @brief Affiche l'état du jeu grâce à la librairie ncurses.
 * @param EtatJeu L'état du jeu qu'on souhaite afficher.
 * @param score_j1 Le score du joueur 1.
 * @param score_j2 Le score du joueur 2.
 * @param match_num Le numéro du match en cours.
 * @param nb_match Le nombre de matchs à jouer.
 */
void afficher_jeu(EtatJeu, int, int, int, int);

/**
 * @brief Affiche les score des joueurs, le numéro du match et le nombre de matchs à jouer.
 * @param score_j1 Le score du joueur 1.
 * @param score_j2 Le score du joueur 2.
 * @param match_num Le numéro du match en cours.
 * @param nb_match Le nombre de matchs à jouer.
 */
void afficher_match(int, int, int, int);

/**
 * @brief Affiche le gagnant du match.
 * @param gagnant Le joueur gagnant.
 */
void afficher_gagnant(Joueur);

#endif // graphics_h