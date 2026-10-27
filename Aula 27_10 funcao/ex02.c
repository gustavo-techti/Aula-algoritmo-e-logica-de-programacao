#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

void mostrarlinhas(){
    printf("-------------------!!!"); 
}

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    mostrarlinhas(); 

    
    return 0 ; 
}