#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main() {
    float f, c;
    printf("Digite a temperatura em Graus Fahrenheit: ");
    scanf("%f", &f);
    c = 5.0*(f -32.0)/9.0;
    printf("A temperatura em Celsius eh: %.2f", c);
    return 0;
}
