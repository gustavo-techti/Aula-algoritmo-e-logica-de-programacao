#include<stdio.h>
#include <stdlib.h>
#include<locale.h>


float media(float a, float b){
    return (a+b)/2; 
}

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

   float ResultadoMedia; 

   ResultadoMedia = media(5, 10); 

   printf("O resultado foi: %.2f\n", ResultadoMedia); 

    
    return 0 ; 
}