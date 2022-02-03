#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main() {
    setlocale(LC_ALL,"Portuguese");
    float m2, hc;
    printf("Digite a area em hc: ");
    scanf("%f", &hc);
    m2 = hc * 10000;
    printf("\nA area em hectares é: %.2f",hc);
    return 0;
}
