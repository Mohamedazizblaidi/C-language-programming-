#include <stdio.h>
int main() {
 int a, b;
 printf("Entrez deux entiers : ");
 scanf("%d %d", &a, &b);
 if (a > b)
 printf("Le plus grand est %d\n", a);
 else
 printf("Le plus grand est %d\n", b);
 return 0;
}
