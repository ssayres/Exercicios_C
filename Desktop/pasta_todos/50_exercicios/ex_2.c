#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

int a;
int b;
int c;
int soma;

printf("\n Digite o primeiro valor: \n");
scanf("%d", &a);
printf("\n Digite o segundo valor: \n");
scanf("%i", &b);
printf("\n Digite o terceiro valor: \n");
scanf("%i", &c);
soma = a+b+c;
printf("\n Soma: %i",soma);
}
