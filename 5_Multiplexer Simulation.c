#include <stdio.h>

int main()
{
    int data[8], s2, s1, s0, select, output;

    printf("Enter 8 data bits (D0 to D7):\n");

    for (int i = 0; i < 8; i++)
    {
        printf("D%d: ", i);
        scanf("%d", &data[i]);

        if (data[i] != 0 && data[i] != 1)
        {
            printf("Invalid data input\n");
            return 1;
        }
    }

    printf("Enter 3 select bits (S2 S1 S0): ");
    scanf("%d %d %d", &s2, &s1, &s0);

    if ((s2 != 0 && s2 != 1) ||
        (s1 != 0 && s1 != 1) ||
        (s0 != 0 && s0 != 1))
    {
        printf("Invalid select input\n");
        return 1;
    }

    select = (s2 * 4) + (s1 * 2) + s0;

    output = data[select];

    printf("Selected Input = D%d\n", select);
    printf("Output = %d\n", output);

    return 0;
}
