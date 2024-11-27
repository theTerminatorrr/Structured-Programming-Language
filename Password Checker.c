#include <stdio.h>

int main()
{
    int pin;

    do
    {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == 2025)
        {
            printf("Welcome...\n");
        }
        else
        {
            printf("Wrong PIN!!!\n");
        }
    }
    while (pin != 2025);

    return 0;
}
