#include<stdio.h>
#include <stdlib.h>
#include<locale.h>


int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    float numeros[3] = {7.0, 8.5, 9.0}; 

        printf("O 3º numero é : %d\n", numeros[2]); 
    
    
    return 0 ; 
}