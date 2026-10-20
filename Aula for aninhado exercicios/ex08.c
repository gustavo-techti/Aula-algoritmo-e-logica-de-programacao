#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    int numero, quantipar = 0, quantiimpar = 0; 
    
    for(int i = 1; i <= 10; i++){
    printf("Digite um numero, por favor: "); 
    scanf("%d", &numero); 

    if(numero % 2 == 0){
        quantipar++; 
    } else{
        quantiimpar++; 
    }
    }
    printf("Numeros pares: %d\n", quantipar); 
    printf("Numeros impares: %d\n", quantiimpar); 
    
}