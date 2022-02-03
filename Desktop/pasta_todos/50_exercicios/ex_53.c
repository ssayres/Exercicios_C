#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main() {
   setlocale(LC_ALL,"Portuguese");
    float m2, hectares;
    printf("Digite a area em hectares: ");
    scanf("%f", &hectares);
    m2 = hectares * 10000;
    printf("\nA area em metros quadrados é de : %.lf\n",m2);
    return 0;
}
