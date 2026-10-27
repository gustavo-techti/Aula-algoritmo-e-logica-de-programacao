#include<stdio.h>
#include <stdlib.h>
#include<locale.h>


int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int numeros[5] = {10, 20, 30, 40, 41}; 

        printf("O 3º numero é : %d\n", numeros[2]); 
    
    
    return 0 ; 
}