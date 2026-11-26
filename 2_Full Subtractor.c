#include <stdio.h>

int main()
{
    int a, b, bin, difference, borrow;

    printf("Enter A (0 or 1): ");
    scanf("%d", &a);

    printf("Enter B (0 or 1): ");
    scanf("%d", &b);

    printf("Enter Borrow-in (0 or 1): ");
    scanf("%d", &bin);

    if ((a != 0 && a != 1) ||
        (b != 0 && b != 1) ||
        (bin != 0 && bin != 1))
    {
        printf("Invalid input");
        return 1;
    }

    difference = a ^ b ^ bin;
    borrow = (!a & b) | (!a & bin) | (b & bin);

    printf("Difference = %d\n", difference);
    printf("Borrow-out = %d\n", borrow);

    return 0;
}
