#include <stdio.h>   
/* On inclut la bibliothèque standard d’entrées/sorties 
   pour pouvoir utiliser printf() pour l’affichage. */

int main() {
    /* Déclaration d’un tableau d’entiers.
       - "int" : type des éléments (ici des entiers).
       - "notes[5]" : nom du tableau et sa taille (5 éléments).
       - Les indices valides vont de 0 à 4.
       - Les accolades {} permettent d’initialiser directement 
         chaque élément du tableau. */
    int notes[5] = {12, 15, 8, 17, 10};

    /* Boucle for pour parcourir tous les éléments du tableau.
       - i = 0 au départ.
       - i < 5 : on continue tant qu’on n’a pas atteint la fin du tableau.
       - i++ : on incrémente i de 1 à chaque passage. */
    for (int i = 0; i < 5; i++) {

        /* printf affiche l’indice et la valeur correspondante.
           - %d : format d’affichage d’un entier.
           - i : l’indice courant.
           - notes[i] : l’élément du tableau à l’indice i. */
        printf("Note %d = %d\n", i, notes[i]);
    }

    /* return 0 : le programme se termine correctement. */
    return 0;
}
