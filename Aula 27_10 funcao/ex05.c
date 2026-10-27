#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int subtrair(int a, int b){

    
    return a-b; 
}

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int subtracao; 

    subtracao = subtrair(10, 5); 

    printf("o resultado foi: %d\n", subtracao);

    
    return 0 ; 
}