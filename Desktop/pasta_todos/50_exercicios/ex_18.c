#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");
float horas,numero,salario,porcentagem,liquido;
printf("Digite o valor das horas trabalhadas\n");
scanf("%f",&horas);
printf("Digite o número de horas trabalhadas em um mês \n ");
scanf("%f", &numero);
salario = horas * numero;
porcentagem = salario * 0.010;
liquido = salario + porcentagem;
printf("Valor do salário é de %.lf ",liquido);
printf("\n\n");
system("pause");
return 0;
}
