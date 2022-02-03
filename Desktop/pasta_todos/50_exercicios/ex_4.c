#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

float a;
float quinta;

printf("\n Digite seu valor: \n");
scanf("%f", &a);
quinta = a/5;
printf("\n A quinta parte : %f",quinta);
}
