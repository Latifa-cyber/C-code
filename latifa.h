#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Gets an integer from the user
int get_int(void)
{
    int i;
    printf("Please enter an integer: ");
    scanf("%i",&i);
    return i;
}

// Gets a float from the user
float get_float(void)
{
    float f;
    printf("Please enter a float: ");
    scanf("%f",&f);
    return f;
}

// Gets a word from the user
char* get_word(void)
{
    char *w = malloc(8);
    printf("Please enter a word: ");
    scanf("%s",w);
    return w;
    free(w);
}

// Counts letters that user types 
int count_letters(char* t)
{
    int i = 0;
    int letters = 0;
    while (t[i] != '\0')
    {
        if (isalpha(t[i])!= 0)
        {
            letters++;
        }
        i++;
    }
    return letters;
}

// Counts words that user types
int count_words(char* t)
{
    int i = 0;
    int w = 1;
    for (i = 0; t[i] != '\0'; i++)
    {
        if (t[i] == ' ' && t[i+1] != ' ')
            w++;
    }
    return w;
}

// Counts sentences that user types
int count_sentences(char* t)
{
    int i = 0;
    int sent = 0;
    for (i = 0; t[i] != '\0'; i++)
    {
        if (t[i] == '.' || t[i] == '!' || t[i] == '?')
        {
            sent++;
        }

    }
    return sent;
}

// Counts the average of an array of integers
float average(int length, int array[])
     {
         int sum = 0;
         for (int i = 0; i < length; i++)
        {
            sum += array[i];
        }
         return sum / (float) length;
     }

// Prompt user for positive integer
int get_positive_int()
{
    int p;
    do
    {
        printf("Please enter a positive integer: ");
        p = get_int();
    }
    while (p < 1);
    return p;
}
// Prompt user for negative integer
int get_negative_int()
{
    int n;
    do
    {
        printf("Please enter a negative integer: ");
        n = get_int();
    }
    while (n >= 0);
    return n;
}





