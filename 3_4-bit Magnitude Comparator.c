#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter A (0 to 15): ");
    scanf("%d", &a);

    printf("Enter B (0 to 15): ");
    scanf("%d", &b);

    if (a < 0 || a > 15 || b < 0 || b > 15)
    {
        printf("Invalid 4-bit input");
        return 1;
    }

    if (a > b)
        printf("A > B\n");
    else if (a == b)
        printf("A = B\n");
    else
        printf("A < B\n");

    return 0;
}
