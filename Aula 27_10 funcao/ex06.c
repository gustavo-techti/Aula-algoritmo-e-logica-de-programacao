#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int quadrado(int numero){
    return numero * numero; 
}

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int quadradoResultado; 

    quadradoResultado = quadrado(4); 
    printf("Resultado> %d\n", quadradoResultado); 

    
    return 0 ; 
}