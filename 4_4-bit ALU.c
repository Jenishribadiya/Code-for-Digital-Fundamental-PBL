#include <stdio.h>

int main()
{
    int a, b, choice, result;

    while (1)
    {
        printf("\n--- 4-bit ALU ---\n");
        printf("1. AND\n");
        printf("2. OR\n");
        printf("3. XOR\n");
        printf("4. Addition\n");
        printf("5. Subtraction\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 6)
            break;

        if (choice < 1 || choice > 5)
        {
            printf("Invalid choice\n");
            continue;
        }

        printf("Enter A (0 to 15): ");
        scanf("%d", &a);

        printf("Enter B (0 to 15): ");
        scanf("%d", &b);

        if (a < 0 || a > 15 || b < 0 || b > 15)
        {
            printf("Invalid 4-bit input\n");
            continue;
        }

        switch (choice)
        {
            case 1:
                result = a & b;
                break;

            case 2:
                result = a | b;
                break;

            case 3:
                result = a ^ b;
                break;

            case 4:
                result = a + b;
                printf("Carry = %d\n", result > 15);
                break;

            case 5:
                result = a - b;
                printf("Borrow = %d\n", a < b);
                break;
        }

        result = result & 15;

        printf("Decimal Result = %d\n", result);

        printf("Binary Result = ");
        for (int i = 3; i >= 0; i--)
        {
            printf("%d", (result >> i) & 1);
        }

        printf("\n");
    }

    return 0;
}
