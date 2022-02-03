#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");
float salariobase,porcentagem1,porcentagem2,liquido;
printf("Digite o salário base\n");
scanf("%f",&salariobase);
porcentagem1 = salariobase * 0.05;
porcentagem2 = salariobase * 0.07;
liquido = salariobase + porcentagem1 - porcentagem2;
printf("Valor do salário é de %f ",liquido);
printf("\n\n");
system("pause");
return 0;
}
