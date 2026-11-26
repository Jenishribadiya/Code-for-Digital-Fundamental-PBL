#include <stdio.h>

int main()
{
    int a, b, difference, borrow;

    printf("Enter first bit (0 or 1): ");
    scanf("%d", &a);

    printf("Enter second bit (0 or 1): ");
    scanf("%d", &b);

    if ((a != 0 && a != 1) || (b != 0 && b != 1))
    {
        printf("Invalid input");
        return 1;
    }

    difference = a ^ b;
    borrow = (!a) & b;

    printf("Difference = %d\n", difference);
    printf("Borrow = %d\n", borrow);

    return 0;
}
