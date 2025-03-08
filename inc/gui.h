#ifndef GUI_H
#define GUI_H

#include <ncurses.h>
#include "moteur.h"
#include "graphics.h"

/**
 * @brief Attend un clic et calcule le coup correspondant.
 * @param EtatJeu L'état du jeu qu'on souhaite modifier.
 */
void lire_coup(EtatJeu*);

#endif // GUI_H