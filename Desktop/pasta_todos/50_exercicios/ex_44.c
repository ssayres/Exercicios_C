#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main() {
    float mc, lt;
    printf("Digite o volume em m3: ");
    scanf("%f", &mc);
    lt = 1000 * mc;
    printf("\nO valor convertido em litros eh: %.2f", lt);
    return 0;
}
