#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");
float dias,valordias,porcentagem,liquido;
printf("Digite quantos dias o encanador trabalhou\n");
scanf("%f",&dias);
valordias = dias * 30;
porcentagem = valordias * 0,08;
liquido = valordias - porcentagem;
printf("Valor do encanador é de %.lf ",liquido);
printf("\n\n");
system("pause");
return 0;
}
