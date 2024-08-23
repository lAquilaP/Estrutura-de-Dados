#include <stdio.h>

int main()
 {
    char entrada;
    printf("DESEJA CONTINUAR? [SIM - s / NAO - n]\n");
    scanf(" %c", &entrada);
    
    switch(entrada){
        case 's':
            printf("\n\n\n********************************** - VOCE ESCOLHEU CONTINUAR! - **********************************\n\n\n");
            break;
        case 'n':
            printf("\n\n\n********************************** - VOCE ESCOLHEU PARAR! - **********************************\n\n\n");
            break;
        default:
            printf("\n\n\n********************************** - OPCAO INVALIDA!!!!!!!!!!!!!!!!!!! - **********************************\n\n\n");
            break;
    }
    system("pause")
    return 0;
}
