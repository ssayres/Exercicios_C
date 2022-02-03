#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");
float produto,parcelas,desconto,vdesconto,comissao1,comissao2;
printf("Digite o valor do produto \n");
scanf("%f",&produto);
parcelas = produto/3;
desconto = produto * 0.010;
vdesconto = produto - desconto;
comissao1= produto * 0.05;
comissao2= vdesconto * 0.05;

printf("Valor do produto com desconto é de %.lf ", vdesconto);
printf("\n\n");
printf("Valor da comissão à vista é de %.lf ", comissao1);
printf("\n\n");
printf("Valor da comissão parcelada é de %.lf ", comissao2);
printf("\n\n");
system("pause");
return 0;
}
