#include <stdio.h>
#include <cs50.h>

{
float celsius, fahrenheit;
printf("Entrez une température en degrés Fahrenheit : ");
scanf("%f", &fahrenheit);
celsius = 0.55556 * (fahrenheit - 32.0);
printf("Température de %f degré Celsius.\n", celsius);
return 0;
}
