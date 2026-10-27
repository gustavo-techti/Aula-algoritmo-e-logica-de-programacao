#include<stdio.h>
#include <stdlib.h>
#include<locale.h>


int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int numeros[6] = {10, 20, 30, 40, 41, 42}; 
    for(int i= 0; i<6; i++){
        printf("Os numeros são: %d\n", numeros[i]); 
    }
    
    
    return 0 ; 
}