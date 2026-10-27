#include<stdio.h>
#include <stdlib.h>
#include<locale.h>


int fatorial(int numero){
    if(numero == 1) {
        return 1; 
    }else{
       return numero * fatorial(numero-1); 
    }
}

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

   int ResultadoFatorial; 

   ResultadoFatorial = fatorial(3); 

   printf("O resultado foi: %d\n", ResultadoFatorial); 

    
    return 0 ; 
}