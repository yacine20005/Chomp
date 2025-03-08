#include <stdio.h>
#include "moteur.h"

Joueur adversaire(Joueur JoueurCourant)
{
    return JoueurCourant == JOUEUR_1 ? JOUEUR_2 : JOUEUR_1;
}

Joueur test = JOUEUR_1;

Tablette creer_tablette()
{
    Tablette tablette;
    for (int i = 0; i < NB_LIGNES; i++)
    {
        for (int j = 0; j < NB_COLONNES; j++)
        {
            tablette.tab[i][j] = 1;
        }
    }
    return tablette;
}

void manger(Tablette *tablette, int ligne, int colonne)
{
    for (int y = ligne; y < NB_LIGNES; y++)
    {
        for (int x = colonne; x < NB_COLONNES; x++)
        {
            tablette->tab[y][x] = 0;
        }
    }
}

void joueur_coup(EtatJeu *etat, Coup coup)
{
    manger(&(etat->tablette), coup.ligne, coup.colonne);
    etat->JoueurCourant = adversaire(etat->JoueurCourant);
}