#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int dobro(int numero){
   return numero*2; 
}

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int resultado_dobro2; 
    resultado_dobro2 = dobro(12); 
    printf("O resultado é: %d \n", resultado_dobro2); 

    
    return 0 ; 
}