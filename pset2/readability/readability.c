#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    //Commentaire
    string text = get_string("Text : ");
    //Commentaire
    int letters = 0, words = 0, sentences =  0;
    //Commentaire
    int length = strlen(text);
    //Commentaire
    for (int i = 0; i < length; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        if (isspace(text[i])) //on compte le nombre de mot en comptant le nombre despace words = espace +1
        {
            words++;
        }
        if (text[i] == '.' || text[i] == '!'  || text[i] == '?')
        {
            sentences++;
        }
    }
    //Commentaire
    words ++;
    //Commentaire
    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
    return 0;
}