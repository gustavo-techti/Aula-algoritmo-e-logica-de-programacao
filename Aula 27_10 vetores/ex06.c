#include<stdio.h>
#include <stdlib.h>
#include<locale.h>


int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int numeros[5] = {1, 2, 3, 4, 5}; 
    int soma = 0; 
    for(int i=0; i<5; i++){
        printf("Os numeros são: %d\n", numeros[i]); 
        soma +=numeros[i]; 
    }
    printf("A soma dos numeros são: %d\n", soma); 
    
    return 0 ; 
}