#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

float a;
float quadrado;

printf("\n Digite seu valor: \n");
scanf("%f", &a);
quadrado = a*a;
printf("\n N�mero ao quadrado: %f",quadrado);
}
