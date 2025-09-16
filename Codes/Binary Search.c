#include <stdio.h>

// Fonction de recherche dichotomique
int recherche_dichotomique(int arr[], int n, int val) {
    int gauche = 0, droite = n - 1;
    while (gauche <= droite) {
        int milieu = (gauche + droite) / 2;
        if (arr[milieu] == val)
            return milieu;  // valeur trouvée
        else if (arr[milieu] < val)
            gauche = milieu + 1;  // chercher dans la moitié droite
        else
            droite = milieu - 1;  // chercher dans la moitié gauche
    }
    return -1; // valeur non trouvée
}

int main() {
    int n, val;

    // 1. Demander la taille du tableau
    printf("Entrez la taille du tableau (doit être trié) : ");
    scanf("%d", &n);

    int arr[n];

    // 2. Saisie des éléments du tableau (doit être en ordre croissant)
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Demander la valeur à rechercher
    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &val);

    // 4. Appeler la fonction de recherche dichotomique
    int position = recherche_dichotomique(arr, n, val);

    // 5. Afficher le résultat
    if (position != -1)
        printf("La valeur %d a été trouvée à la position %d.\n", val, position);
    else
        printf("La valeur %d n'est pas dans le tableau.\n", val);

    return 0;
}
