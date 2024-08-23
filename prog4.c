#include <stdio.h>

int main()
 {
    int n1, n2;
    printf("DIGITE 2 NUMEROS: \n");
    scanf(" %d %d", &n1, &n2);
    
    if(n1 == n2){
        printf("OS NUMEROS SAO IGUAIS!!!!!");
    } else{
        printf("OS NUMEROS SAO DIFERENTES");
        if(n1 > n2){
            printf("----------------------------------------- O PRIMEIRO NUMERO É MAIOR -----------------------------------------")
        } else{
            printf("----------------------------------------- O SEGUNDO NUMERO É MAIOR -----------------------------------------");
        }   
    }
    
    system("pause")
    return 0;
}
