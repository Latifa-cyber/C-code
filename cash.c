#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        printf("Change owed: ");

        scanf("%f", &dollars);

    }while(dollars <= 0);

    int cents = round(dollars * 100);

    int Nbr_coins = 0;
    while(cents > 0)
    {
        if(cents >= 25)
        {
            Nbr_coins++;
            cents = cents - 25;
        }
        else if(cents >= 10)
        {
            Nbr_coins++;
            cents = cents - 10;
        }

        else if(cents >= 5)
        {
            Nbr_coins++;
            cents = cents - 5;
        }

        else if(cents >= 1)
        {
            Nbr_coins++;
            cents = cents - 1;
        }
    }

    printf("%i\n", Nbr_coins);
}
