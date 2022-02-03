#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main() {
    float jd, mt ;
    printf("Digite o comprimento em metros: ");
    scanf("%f", &mt);
    jd = mt /0.91;
    printf("\nO comprimento convertido em jardas: %.2f",jd);
    return 0;
}
