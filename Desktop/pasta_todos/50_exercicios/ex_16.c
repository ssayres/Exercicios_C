#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>

int main(){
setlocale(LC_ALL,"Portuguese");
float conc1,conc2,conc3;
conc1 = 780000 * 0.46;
conc2 = 780000 * 0.32;
conc3 = 171600;
printf("Valor do primeiro ganhador é de %.lf ",conc1);
printf("\n\n");
printf("Valor do segundo ganhador é de %.lf ",conc2);
printf("\n\n");
printf("Valor do terceiro ganhador é de %.lf ",conc3);
printf("\n\n");
system("pause");
return 0;
}
