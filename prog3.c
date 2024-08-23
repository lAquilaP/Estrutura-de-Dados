#include <stdio.h>

int main()
 {
    int n1, condicao;
    printf("INFORME UM NUMEROS: ");
    scanf(" %d", &n1);
    
    condicao = (n1 > 12)? 100 : 200;
    printf("\n\n\n\n\nO VALOR DO SEGUNDO NUMERO E: %d", condicao);

    system("pause");
    return 0;
}
