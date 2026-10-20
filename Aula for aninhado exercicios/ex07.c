#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8"); 
    
    int numero, soma = 0;

    while (1)
    {
        printf("Digite um numero: ( ou 0 para sair)"); 
        scanf("%d", &numero); 

        if(numero == 0){
            break;
        }else if(numero<= 0){
            continue;
        }else{
            soma += numero;
        }
    }
    printf("A soma dos numeros poitivos foi: %d\n", soma); 
    

        
    

    return 0; 
}