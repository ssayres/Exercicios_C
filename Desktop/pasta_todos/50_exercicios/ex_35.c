#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>




int main() {
    float c, k;
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &c);
    k= c + 273.15;
    printf("\nA temperatura em Kelvin eh: %.2f", k);
    return 0;
}
