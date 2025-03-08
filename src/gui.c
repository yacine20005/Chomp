#include <stdlib.h>
#include "gui.h"

void lire_coup(EtatJeu *etat)
{
    MEVENT event;
    while (1)
    {
        int ch = getch();
        if (ch == KEY_MOUSE && getmouse(&event) == OK)
        {
            if (event.y >= LIGNE_DEBUT && event.y < LIGNE_DEBUT + NB_LIGNES &&
                event.x >= COLONNE_DEBUT && event.x < COLONNE_DEBUT + NB_COLONNES)
            {
                int ligne = event.y - LIGNE_DEBUT;
                int colonne = event.x - COLONNE_DEBUT;

                refresh();

                if (event.bstate & BUTTON1_CLICKED)
                {
                    Coup coup = {ligne, colonne};
                    if (est_legal(*etat, coup))
                    {
                        joueur_coup(etat, coup);
                        break;
                    }
                }
            }
        }
        if (ch == 'q')
        {
            endwin();
            exit(0);

        }
    }
}
