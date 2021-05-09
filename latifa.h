#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

typedef char *string;

// swaps two integers
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Gets a character from the user
char get_char(string s)
{
    char c = '\0';
    printf("%s",s);
    scanf("%c", &c);
    return c;
}

// Gets a double from the user
double get_double(string s)
{
    double d;
    printf("%s",s);
    scanf("%lf",&d);
    return d;
}

// Gets an integer from the user
int get_int(string s)
{
    int i;
    printf("%s",s);
    scanf("%i",&i);
    return i;
}

// Gets a float from the user
float get_float(string s)
{
    float f;
    printf("%s",s);
    scanf("%f",&f);
    return f;
}

// Gets a word from the user
string get_word(string s)
{
    int i=0;
    string t = malloc(8);
    printf("%s",s);
    scanf("%s",t);
    return t;
    free(t);
}

// Counts letters that user types
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

// Counts words that user types
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

// Counts sentences that user types
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
        p = get_int("Please enter a positive integer: ");
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
        n = get_int("Please enter a negative integer: ");
    }
    while (n >= 0);
    return n;
}
