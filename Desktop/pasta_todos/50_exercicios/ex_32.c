#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>



int main() {
    float c, f;
    printf("Digite a temperatura em Graus Celsius: ");
    scanf("%f", &c);
    f = c*(9.0/5.0) + 32.0;
    printf("\nA temperatura em Fahrenheit eh: %.2f", f);
    return 0;
}
