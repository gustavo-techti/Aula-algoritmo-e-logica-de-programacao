#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    int numero; 
    while (1)
    {
        printf("Digite um numero qualquer, ou digite 0 para sair:"); 
        scanf("%d", &numero); 

        if(numero == 0){
            break;
        }

        printf("Numero digitado: %d\n", numero); 
    }
    

    return 0; 
}