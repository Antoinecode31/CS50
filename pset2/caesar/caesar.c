#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    // On récupère la clé
    int key = atoi(argv[1]);
    if(key == 0 || argc > 2)
    {
        printf("Usage : ./caesar key\n");
        return 0;
    }

    //On demande à l'utilisateur la chaîne de caractères qu'il souhaite encoder.

    string s = get_string(plaintext);
    printf("ciphertext");
    //...

    //On encode le message de l'utilisateur avec la clé

            //...

    //On affiche le résultat à l'utilisateur

    //...

}