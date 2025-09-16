#include <stdio.h>

int main() {
    int n, val;

    // 1. Demander à l'utilisateur la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    // 2. Déclarer un tableau de taille n
    int arr[n];

    // 3. Remplir le tableau avec des valeurs entrées par l'utilisateur
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i);
        scanf("%d", &arr[i]);
    }

    // 4. Demander la valeur à rechercher
    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &val);

    // 5. Parcourir le tableau pour trouver la valeur
    int position = -1; // -1 signifie « pas trouvé »
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            position = i; // on sauvegarde l'indice où on a trouvé
            break;        // on arrête la boucle
        }
    }

    // 6. Afficher le résultat
    if (position != -1)
        printf("La valeur %d a été trouvée à la position %d.\n", val, position);
    else
        printf("La valeur %d n'est pas dans le tableau.\n", val);

    return 0;
}
