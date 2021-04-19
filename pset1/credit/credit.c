#include <cs50.h>
#include <stdio.h>
int main(void)
{
    long c, c2; //numero de carte 
    c = get_long("Number:"); //demande a l'utilisateur de saisir le numero de sa carte
    int size = 0;//taille du numero
    c2 = c;
    while (c2 > 0) // On détermine la taille du nombre en le divisant successivement par 10
    {
        c2 = c2 / 10;
        size++;
    }
    int array[size];
    c2 = c;
    for (int i = 0; i < size; i++) // On stocke chaque chiffre qui compose le nombre dans un tableau
    {
        array[i] = c2 % 10;
        c2 = c2 / 10;
    }
    int s = 0;
    for (int i = 0; i < size; i++) // On calcule le checksum
    {
        if (i % 2 == 1) 
        {
            c2 = array[i] * 2; 
            s = s + c2 / 10 + c2 % 10;
        }
        else
        {
            s += array[i]; // revient à dire s = s + array[i];
        }
    }
    int t = array[size - 1] * 10 + array[size - 2];
    if (s % 10 == 0)
    {
        if ((t == 34 || t == 37) && size == 15) //AMEX
        {
            printf("AMEX\n");
            return 0;
        }
        if ((size == 13 || size == 16) && array[size - 1] == 4) //VISA
        {
            printf("VISA\n");
            return 0;
        }
        if ((t >= 51 && t <= 55) && size == 16) //MASTERCARD
        {
            printf("MASTERCARD\n");
            return 0;
        }
    }
    printf("INVALID\n");
    return 0;
}