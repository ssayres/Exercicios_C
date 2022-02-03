#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

float a;
float b;
float c;
float d;
float media;

printf("\n Digite a primeira nota: \n");
scanf("%f", &a);
printf("\n Digite a segunda nota: \n");
scanf("%f", &b);
printf("\n Digite a terceira nota: \n");
scanf("%f", &c);
printf("\n Digite a quarta nota: \n");
scanf("%f", &c);

media = (a+b+c+d)/4;
printf("\n Média: %f",media);
}
