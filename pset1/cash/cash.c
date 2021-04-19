#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float money;
    do
    {
        money = get_float("Change owed");
    }
    while (money < 0);
    int cents = round(money * 100);
    int coins = 0;
    int coinTypes[4] = {25, 10, 5, 1};
    for (int i = 0; i < 4; i++)
    {
        while (cents >= coinTypes[i])
        {
            coins++;
            cents -= coinTypes[i];
        }
    }
    printf("%i\n", coins);
}
