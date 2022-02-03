#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
    float p, c;
    printf("Digite o valor em centimetros: ");
    scanf("%f", &c);
    p = c / 2.54;
    printf("\nO valor convertido em polegadas eh: %.2f", p);
    return 0;
}
