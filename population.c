#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Prompt for start size
    int start;
    do
    {    printf("Start size: ");
        scanf("%i", &start);
    }   
    while(start < 9);

    // Prompt for end size
    int end;
    do
    {
        printf("End size: ");
        scanf("%i", &end);
    }
    while(end <= start);

    // Calculate number of years until we reach threshold
    int i = 0;
    div_t born;
    div_t dead;
    int sum = start;
    while(sum < end)
    {
        born = div(start , 3);
        dead = div(start , 4);
        sum = sum + born.quot - dead.quot;
        i++;
        start = sum;
    }
    // Print number of years
    printf("Years: %i\n", i);
}
