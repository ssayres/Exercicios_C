#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
setlocale(LC_ALL,"Portuguese");
   int num1 = 1 , num2 = 2 , num3 = 3 , num4 = 4;
   printf("Numero inteiro de 4 digitos : %d%d%d%d " , num1, num2, num3, num4);
   printf("\n%d\n%d\n%d\n%d\n", num1, num2, num3);
   system("pause");
   return 0;
}
