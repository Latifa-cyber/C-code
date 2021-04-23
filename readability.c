#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

int count_letters(string t);

int count_words(string t);

int count_sentences(string t);


int main(void)
{
    string s = get_string("Text: ");
    int l = count_letters(s);
    int w = count_words(s);
    int sen = count_sentences(s);

    float S = sen * 100 / w;
    float L = l * 100 / w;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int X = round(index);

    if (X < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(X>=1 && X<16)
    {
        printf("Grade %i\n",X);
    }
    else
    {
        printf("Grade 16+\n");
    }
}

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
