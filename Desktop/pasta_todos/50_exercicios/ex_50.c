#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
    float m2, ac;
    printf("Digite a area em m2: ");
    scanf("%f", &m2);
    ac = m2 * 0.000247;
    printf("\nA area em acres eh: %.2f",ac);
    return 0;
}
