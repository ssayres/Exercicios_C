#include<stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main() {
    int idade, ano_atual, ano_nasc;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Insira em que ano estamos: ");
    scanf("%d", &ano_atual);
    ano_nasc = ano_atual - idade;
    printf("Voce nasceu em: %d", ano_nasc);
    printf("\n");
    system("pause");
    return 0;
}
