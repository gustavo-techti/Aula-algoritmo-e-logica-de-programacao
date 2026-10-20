#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8"); 
    
    int numero;

    for(int i = 1; i <=5; i++ ){
        printf("Digite um numero:"); 
        scanf("%d", &numero); 
        if(numero<=0){
            continue;
        }
        printf("Numero: %d\n", numero);
    }

        
    

    return 0; 
}