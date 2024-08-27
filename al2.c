#include <stdio.h>
int filhos;

float salarioBruto, salarioFamilia, vantagens, deducoes, horas, salarioHora, valorFilho, taxaIR, jornada;

void calculoVantagens(float horas, float salarioHora, int filhos, float valorFilho);

void calculoDeducoes(float salarioBruto, float taxaIR);

int main(){
    printf("====================================CALCULADORA====================================\n");
    printf("DIGITE A QUANTIDADE DE HORAS TRABALHADAS POR DIA: ");
    scanf("%f/n", &horas);
    printf("DIGITE SEU SALARIO POR HORA: ");
    scanf("%f/n", &salarioHora);
    printf("DIGITE QUANTOS FILHOS POSSUI: ");
    scanf("%d/n", &filhos);
    printf("DIGITE O VALOR POR FILHO: ");
    scanf("%f/n", &valorFilho);
    printf("DIGITE O VALOR DA TAXA IR: ");
    scanf("%f/n", &taxaIR);
    calculoVantagens(horas, salarioHora, filhos, valorFilho);
    calculoDeducoes(salarioBruto, taxaIR);
    printf("CONSIDERANDO AS INFROMACOES OBTIDAS: \n");


    printf("SALARIO BRUTO: %.2f\n", salarioBruto);
    printf("DEDUCOES AO DIA: %.2f\n\n\n", deducoes);
    printf("O SALARIO LIQUIDO: %.2f\n", (salarioBruto - deducoes));

    system("pause");
    return 0;
}
void calculoVantagens(float horas, float salarioHora, int filhos, float valorFilho){

    salarioBruto = horas * salarioHora;

    salarioFamilia = filhos * valorFilho;

    vantagens = salarioBruto + salarioFamilia;
}

void calculoDeducoes(float salarioBruto, float taxaIR){
    float INSS = salarioBruto * 0.08;

    float IRPF = salarioBruto * taxaIR;

    deducoes = INSS + IRPF;
}
