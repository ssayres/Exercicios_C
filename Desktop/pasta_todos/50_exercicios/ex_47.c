#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
    float kg, lb;
    printf("Digite massa em lb: ");
    scanf("%f", &lb);
    kg = lb *0.45;
    printf("\nO valor convertido em libras: %.2f",lb);
    return 0;
}
