#include <stdio.h>
int main() {
 int n;
 printf("Entrez un entier : ");
 scanf("%d", &n);
 if (n % 2 == 0)
 printf("Pair\n");
 else
 printf("Impair\n");
 return 0;
}
