#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");
float salario,novosalario,aumento;
printf("Digite seu sal�rio\n");
scanf("%f",&salario);
aumento = salario * 0.25;
novosalario = salario + aumento;
printf("Seu novo sal�rio � de %.lf ",novosalario);
printf("\n\n");
system("pause");
return 0;
}
