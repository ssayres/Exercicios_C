#include<stdio.h>
#include<locale.h>
#include<math.h>
int main(){
setlocale(LC_ALL,"Portuguese");

float a;
float conversao;

printf("\n Seu o valor em reais é:\n");
scanf("%f",&a);
conversao = a*5,75;
printf("\n Seu valor em dólares é: %f",conversao);
}
