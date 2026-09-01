#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
int main(){
{
    float nota;
    printf("por favor, digite sua nota direta:");
    scanf("%f", &nota);

    printf("A nota digitada foi: %.2f\n", nota);
    if(nota>=7){
        printf("Voce esta aprovado");
    } else{
        printf("voce esta reprovado.");
    }

    return 0;
}
}
*/
int main()
{

    int operacao;
    float saldo = 5000, valor_saque;

    printf("Por favor, digite a opracao desejda:");
    scanf("%d", &operacao);
    switch (operacao)
    {
    case 1:
        printf("Voce selecionou a opcao, saque.\n");
        printf("Por favor, digite o valor que voce quer sacar agora:");
        scanf("%f", &valor_saque);
        if (valor_saque > saldo)
        {
            printf("Saldo insuficiente!");
        }
        else
        {
            printf("O valor sacado foi: %.2f\n", valor_saque);
            printf("voce ainda possui na conta: %.2f\n", saldo - valor_saque);
        }
        break;
    case 2:
        printf("Deposito");
        float deposito;
        printf("por favor, digite o valor do deposito. ");
            scanf("%f", &deposito);
        printf("O saldo atual e: %.2f", saldo+deposito);
        break;
    case 3:
        printf("Saldo");
        break;
    default:
        printf("Operacao invalida, por favor, tente novamente.");
    }

    return 0;
}