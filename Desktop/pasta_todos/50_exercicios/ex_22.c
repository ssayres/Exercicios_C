#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>

int main(void) {
    setlocale(LC_ALL,"Portuguese");
    char letra;
    printf("Digite uma letra minuscula: ");
    scanf("%c", &letra);
    letra = toupper(letra);
    printf("\nLetra em maiusculo: %c " , letra);
    printf("\n");
    system("pause");
    return 0;
}
