#include "latifa.h"

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
