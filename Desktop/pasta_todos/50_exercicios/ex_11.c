#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

float a;
float area;

printf("\n Digite o valor do raio: \n");
scanf("%f", &a);

area = a*a*3.141592;
printf("\n Area: %.2f",area);
}
