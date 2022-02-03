#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");
float salario,novosalario,aumento;
printf("Digite seu salário\n");
scanf("%f",&salario);
aumento = salario * 0.25;
novosalario = salario + aumento;
printf("Seu novo salário é de %.lf ",novosalario);
printf("\n\n");
system("pause");
return 0;
}
