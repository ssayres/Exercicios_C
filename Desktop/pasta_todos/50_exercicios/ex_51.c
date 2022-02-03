#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
    float m2, ac;
    printf("Digite a area em acres: ");
    scanf("%f", &ac);
    m2 = ac * 4048.58;
    printf("\nA area em m2 eh: %.2f",m2);
    return 0;
}
