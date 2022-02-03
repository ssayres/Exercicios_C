#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    float degrau, altura, quantidade;
    printf("Insira a altura do degrau em centimetros: \n");
    scanf("%f", &degrau);
    printf("Qual altura deseja alcancar em metros:\n");
    scanf("%f", &altura);
    quantidade =  (degrau*100) / altura;
    printf("\nA quantidade de degraus para alcancar a altura é:%f" , quantidade);
    printf("\n\n");
    return 0;
}
