#include <stdio.h>

int main()
 {
    int n1, n2;
    printf("DIGITE 2 NUMEROS: ");
    scanf(" %d %d", &n1, &n2);
    
    if(n1 == n2){
        printf("OS NUMEROS SAO IGUAIS!!!!!");
    } else{
        printf("OS NUMEROS SAO DIFERENTES");
    }
    system("pause");
    return 0;
}
