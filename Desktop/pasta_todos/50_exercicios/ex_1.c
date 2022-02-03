#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
setlocale(LC_ALL,"Portuguese");

float x;
int y;
      printf("\n Digite um número inteiro \n");
      scanf("%d", &y);
      printf("\n Digite um número real \n");
      scanf("%f", &x);
       printf("\n numero inteiro: %d\n",y);
       printf("\n numero real: %f\n",x);

}
