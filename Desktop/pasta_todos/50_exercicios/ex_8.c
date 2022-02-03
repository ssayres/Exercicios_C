#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

float a;
float ante;
float sus;

printf("\n Digite seu valor: \n");
scanf("%f", &a);
ante = a-1;
sus = a+1;
printf("\n Antecessor: %.lf",ante);
printf("\n Sucessor: %.lf",sus);
}
