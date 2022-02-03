#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");
    int num1, num2, num3;
    float volume,pi;
    printf("Digite a altura do cilindro: ");
    scanf("%d", &num1);
    printf("Digite o raio do cilindro: ");
    scanf("%d", &num2);
    pi = 3,141592;
    volume = pi*(num2*num2)*num1;
    printf("O volume é = %.2f", volume);
    printf("\n\n");
    system("pause");
    return 0;
}
