#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main() {
    float jd, mt ;
    printf("Digite o comprimento em jardas: ");
    scanf("%f", &jd);
    mt = 0.91 * jd;
    printf("\nO comprimento convertido em metros: %.2f",mt);
    return 0;
}
