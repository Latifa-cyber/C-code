#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

int count_letters(string t)
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

int count_words(string t)
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

int count_sentences(string t)
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

float average(int length, int array[])
     {
         int sum = 0;
         for (int i = 0; i < length; i++)
        {
            sum += array[i];
        }
         return sum / (float) length;
     }

int get_positive_int()
{
    int p;
    do
    {
        p = get_int("Positive Integer: ");
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
        n = get_int("Negative Integer: ");
    }
    while (n >= 0);
    return n;
}

