#include <stdio.h>

main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("\n%d squared is %.2f\n\n", x, pow(x, 2));
}
