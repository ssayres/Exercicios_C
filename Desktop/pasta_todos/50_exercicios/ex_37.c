#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
    float ms, kmh;
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &ms);
    kmh = ms *3.6;
    printf("\nA velocidade convertida em km/h eh: %.2f", kmh);
    return 0;
}
