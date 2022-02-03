#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>




int main() {
    float km, milhas;
    printf("Digite a distancia em milhas: ");
    scanf("%f", &km);
    milhas = km / 1.61;
    printf("\nA velocidade convertida em milhas eh: %.2f", milhas);
    return 0;
}
