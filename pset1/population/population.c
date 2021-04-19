#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int startsize;
    do
    {
        startsize = get_int("start size: ");
    }
    while (startsize < 9);// TODO: Prompt for start size
    int endsize;
    do
    {
        endsize = get_int("end size: ");
    }
    while (endsize < startsize); // TODO: Prompt for end size
    int year = 0; //number of years
    int birth;  //number of birth 
    int death;  //number of deaths
    int population = startsize; //number of population
    while (population < endsize)
    {
        year++;
        birth = population / 3;
        death = population / 4;
        population = population + birth - death;
    }
    printf("Years: %i", year);
}