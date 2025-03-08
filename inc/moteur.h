#ifndef MOTEUR_H
#define MOTEUR_H

#define NB_LIGNES 8
#define NB_COLONNES 16
#define NB_MATCHES 3

typedef struct
{
    int tab[NB_LIGNES][NB_COLONNES];
} Tablette;

typedef enum
{
    JOUEUR_1,
    JOUEUR_2
} Joueur;

typedef struct
{
    Tablette tablette;
    Joueur JoueurCourant;
} EtatJeu;

typedef struct 
{
    int ligne;
    int colonne;
} Coup;

/**
 * @brief Renvoie l'adresse de l'adversaire du joueur passé en paramètre.
 * @param Joueur Le joueur dont on veut connaître l'adversaire.
 */
Joueur adversaire(Joueur);

/**
 * @brief Crée et renvoie une variable de type Tablette de dimensions NB_LIGNES x NB_COLONNES celle-ci possède tous ses carrés de chocolat.
 * 
 */
Tablette creer_tablette();

/**
 * @brief Modifie la tablette pour manger les carrés de chocolat en position (ligne, colonne) et tous ceux qui sont en dessous et à sa droite.
 * @param Tablette La tablette à modifier.
 * @param int La ligne du carré de chocolat à manger.
 * @param int La colonne du carré de chocolat à manger.
 */
void manger(Tablette*, int, int);

/**
 * @brief La fonction permettra de joueur le coup spécifié en paramètre.
 * @param EtatJeu* L'état du jeu.
 * @param Coup Le coup à jouer.
 */
void joueur_coup(EtatJeu*, Coup);

#endif // chomp_h