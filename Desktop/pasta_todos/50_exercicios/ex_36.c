#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
    float kmh, ms;
    printf("Digite a velocidade em Km/h: ");
    scanf("%f", &kmh);
    ms= kmh / 3.6;
    printf("\nA velocidade convertida em m/s : %.2f", ms);
    return 0;
}
