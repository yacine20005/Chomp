#include <ncurses.h>
#include "graphics.h"
#include "moteur.h"
#include "check.h"
#include "gui.h"

int main(void)
{
    int score_j1 = 0;
    int score_j2 = 0;
    Joueur gagnant;
    EtatJeu etat;
    etat.tablette = creer_tablette();
    etat.JoueurCourant = JOUEUR_1;

    initier_ncurses();
    initier_couleurs();

    afficher_jeu(etat, score_j1, score_j2, 0, NB_MATCHES);
    
    for (int i = 0; i < NB_MATCHES; i++)
    {
        while (!est_jeu_termine(etat, &gagnant))
        {
            afficher_jeu(etat, score_j1, score_j2, i + 1, NB_MATCHES);
            lire_coup(&etat);
        }
        gagnant == JOUEUR_1 ? score_j1++ : score_j2++;
        afficher_jeu(etat, score_j1, score_j2, i + 1, NB_MATCHES);
        etat.tablette = creer_tablette();
        etat.JoueurCourant = adversaire(etat.JoueurCourant);
    }
    afficher_jeu(etat, score_j1, score_j2, NB_MATCHES, NB_MATCHES);
    afficher_gagnant(victoire(score_j1, score_j2));

    return 0;
}