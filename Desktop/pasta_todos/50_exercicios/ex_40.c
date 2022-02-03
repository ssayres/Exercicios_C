#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
    const double pi = 3.14;
    float graus, r;
    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &graus);
    r = graus * pi/180;
    printf("\nO angulo convertido em radianos eh: %.2f", r);
    return 0;
}
