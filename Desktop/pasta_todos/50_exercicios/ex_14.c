#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");
    float num1, num2, num3,num4;
    printf("Digite o valor do produto: ");
    scanf("%f", &num1);
    num2 = 12/100;
    num3 = num1 * num2;
    num4 = num1 - num3;
    printf("Seu valor foi de : %.2f ",num4);
    printf("\n\n");
    system("pause");
    return 0;
}
