#include <stdio.h>

int main(void)
{
    int miles, yards;
    double kilometers;

    printf("Enter miles: ");
    scanf("%d", &miles);

    printf("Enter yards: ");
    scanf("%d", &yards);

    /* تحويل إلى كيلومترات */
    kilometers = 1.609 * (miles + (yards / 1760.0));

    printf("\nA marathon is %.3lf kilometers.\n\n", kilometers);

    return 0;
}
