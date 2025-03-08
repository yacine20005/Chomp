#include "check.h"

int est_legal(EtatJeu etat, Coup coup)
{
    return etat.tablette.tab[coup.ligne][coup.colonne] == 1;
}

int est_jeu_termine(EtatJeu etat, Joueur *gagnant)
{
    if (etat.tablette.tab[0][0] == 0)
    {
        *gagnant = etat.JoueurCourant;
        return 1;
    }
    return 0;
}

Joueur victoire(int score_j1, int score_j2)
{
    if (score_j1 > score_j2)
    {
        return JOUEUR_1;
    }
    else if (score_j2 > score_j1)
    {
        return JOUEUR_2;
    }
    return -1; // Match nul
}