#include <ncurses.h>
#include <stdlib.h>
#include "graphics.h"

void initier_ncurses()
{
    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    mousemask(ALL_MOUSE_EVENTS, NULL);
    curs_set(0);
}

void initier_couleurs()
{
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
}

void afficher_joueur(EtatJeu etat)
{
    mvprintw(0, 0, "Joueur %d", etat.JoueurCourant + 1);
}

void afficher_chocolat(int existe, int ligne, int colonne)
{
    existe ? attron(COLOR_PAIR(1)) : attron(COLOR_PAIR(2));
    mvprintw(ligne, colonne, "O");
    existe ? attroff(COLOR_PAIR(1)) : attroff(COLOR_PAIR(2));
}

void afficher_tablette(EtatJeu etat)
{
    for (int i = 0; i < NB_LIGNES; i++)
    {
        for (int j = 0; j < NB_COLONNES; j++)
        {
            afficher_chocolat(etat.tablette.tab[i][j], LIGNE_DEBUT + i, COLONNE_DEBUT + j);
        }
    }
}

void afficher_match(int score_j1, int score_j2, int match_num, int nb_match)
{
    mvprintw(0, COLS - 35, "Match %d/%d", match_num, nb_match);
    mvprintw(1, COLS - 35, "Score: Joueur 1: %d - Joueur 2: %d", score_j1, score_j2);
    mvprintw(2, COLS - 35, "Appuyez sur 'q' pour quitter");
}

void afficher_jeu(EtatJeu etat, int score_j1, int score_j2, int match_num, int nb_match)
{
    clear();
    afficher_joueur(etat);
    afficher_tablette(etat);
    afficher_match(score_j1, score_j2, match_num, nb_match);
    refresh();
}

void afficher_gagnant(Joueur gagnant)
{
    clear();
    if (gagnant == JOUEUR_1)
    {
        mvprintw(LINES / 2, COLS / 2 - 10, "Joueur 1 a gagné !");
    }
    else if (gagnant == JOUEUR_2)
    {
        mvprintw(LINES / 2, COLS / 2 - 10, "Joueur 2 a gagné !");
    }
    else
    {
        mvprintw(LINES / 2, COLS / 2 - 10, "Match nul !");
    }
    refresh();
    getch();
    endwin();
}
