#include <stdio.h>

int main() {
    int choix;
    float a, b, resultat;

    printf("=== Mini Calculatrice ===\n");
    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    printf("Entrer deux nombres : ");
    scanf("%f %f", &a, &b);

    switch(choix) {
        case 1:
            resultat = a + b;
            printf("Résultat = %.2f\n", resultat);
            break;
        case 2:
            resultat = a - b;
            printf("Résultat = %.2f\n", resultat);
            break;
        case 3:
            resultat = a * b;
            printf("Résultat = %.2f\n", resultat);
            break;
        case 4:
            if(b != 0)
                printf("Résultat = %.2f\n", a / b);
            else
                printf("Erreur : division par zéro !\n");
            break;
        default:
            printf("Choix invalide !\n");
    }

    return 0;
}
