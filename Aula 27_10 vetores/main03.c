#include<stdio.h>
#include <stdlib.h>
#include<locale.h>


int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int numeros[5] = {12,7, 25, 3, 18}; 
    int menor = numeros[0]; 
    int maior = numeros[0]; 

    for(int i=0; i<5; i++){
        if(numeros[i] < menor){
            menor = numeros[i]; 
        }else if(numeros[i] > maior){
            maior = numeros[i]; 
        }
    }  

    printf("O menor numero do vetor é: %d\n", menor); 
    printf("O maior numero do vetor é: %d\n", maior); 


    return 0 ; 
}