#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n, i, j; //n for height, i for first loop, j for second loop
    do
    {
        n = get_int("height:"); //prompt user for height
    }
    while (n < 1 || n > 8);

    for (i = 0; i < n; i++)
    {
        j = n;
        while (j > i + 1) 
        {
            printf(" "); //print spaces
            j--;
        }
        for (j = 0; j <= i; j++)
        {
            printf("#"); //print left hashes
        }
        printf("  "); //print middle space
        for (j = 0; j <= i; j++)
        {
            printf("#"); //print right hashes
        }
        printf("\n"); //print new line
    }
}