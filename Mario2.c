#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        printf("Height: ");
        scanf("%i", &x);
    }
    while(x < 1||x > 8);

    for(int i=0; i<x; i++)
    {
        // print the spaces for the first pyramid

        for(int k=x-1; k>i; k--)

            printf(" ");

        // print the hashes of the first pyramid

        for(int j=0; j<=i; j++)
        {
           printf("#");

        }

        // print two spaces between the two pyramids

        printf("  ");

        // print the second pyramid

        for(int m=0; m<=i; m++)

            printf("#");

        printf("\n");

    }

}
