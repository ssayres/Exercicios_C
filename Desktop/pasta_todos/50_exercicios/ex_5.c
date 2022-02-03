#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

float a;
float b;
float c;
float soma;

printf("\n Digite seu valor: \n");
scanf("%f", &a);
printf("\n Digite seu valor: \n");
scanf("%f", &b);
printf("\n Digite seu valor: \n");
scanf("%f", &c);

soma = pow(a,2)+pow(b,2)+pow(c,2);
printf("\n Soma: %f",soma);
}
