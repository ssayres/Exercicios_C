#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    float k, c;
    printf("Digite a temperatura em Graus Kelvin: ");
    scanf("%.2f", &k);
    c = k - 273.15;
    printf("A temperatura em Celsius eh: %.2f", c);
    return 0;
}
