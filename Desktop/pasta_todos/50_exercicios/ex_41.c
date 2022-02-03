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
    printf("Digite o valor do angulo em radianos: ");
    scanf("%f", &r);
    graus = r * 180/pi;
    printf("\nO angulo convertido em graus eh: %.2f", graus);
    return 0;
}
