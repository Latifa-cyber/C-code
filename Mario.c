#include <stdio.h>

int main(void)
{
    int x;

    // Get height from user between 1 and 8

    do
    {
        printf("Height: ");
        scanf("%i", &x);
    }
    while(x < 1 || x > 8);

    for(int i=0; i<x; i++)
    {
        // print the spaces

        for(int k=x-1; k>i; k--)

            printf(" ");

        // print the hashes

        for(int j=0; j<=i; j++)

            printf("#");

        printf("\n");
    }
}
