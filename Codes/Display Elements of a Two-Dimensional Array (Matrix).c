#include <stdio.h>   
/* Inclusion de la bibliothèque standard d’entrées/sorties 
   pour pouvoir utiliser printf(). */

int main() {
    /* Déclaration et initialisation d’une matrice 2 lignes x 3 colonnes :
       - "int matrice[2][3]" : tableau à 2 dimensions.
       - Le premier indice = numéro de ligne (0 à 1).
       - Le second indice = numéro de colonne (0 à 2).
       - Les deux accolades imbriquées :
         {1,2,3} remplit la première ligne,
         {4,5,6} remplit la deuxième ligne. */
    int matrice[2][3] = {
        {1, 2, 3},  // Ligne 0
        {4, 5, 6}   // Ligne 1
    };

    /* Première boucle for (sur les lignes) :
       - i = 0 puis 1 (car il y a 2 lignes).
       - Chaque tour correspond à une ligne entière. */
    for (int i = 0; i < 2; i++) {

        /* Deuxième boucle for (sur les colonnes) :
           - j = 0, 1, 2 (car 3 colonnes).
           - Chaque tour correspond à une colonne de la ligne i. */
        for (int j = 0; j < 3; j++) {

            /* Affiche l’élément situé à la ligne i et la colonne j.
               - matrice[i][j] donne l’élément exact.
               - %d : format entier.
               - On ajoute un espace pour séparer les nombres. */
            printf("%d ", matrice[i][j]);
        }

        /* Après avoir affiché toute une ligne, on passe à la ligne suivante
           à l’écran pour que l’affichage ressemble à un tableau. */
        printf("\n");
    }

    /* Fin normale du programme. */
    return 0;
}
