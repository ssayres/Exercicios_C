#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

float lado;
float area;

printf("\n Digite o valor do lado: \n");
scanf("%f", &lado);
area = lado*lado;
printf("\n area: %.lf",area);
}
