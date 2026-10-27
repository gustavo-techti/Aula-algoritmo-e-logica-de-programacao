#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int soma(int a, int b){return a+b;}

int dobro(int numero){ numero * 2; }

void mensagem(){ printf("Olá"); }

void contagem(int numero){
    if(numero == 0){
        return;
    }
    printf("%d", numero); 
    contagem(numero -1);
}


int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int resultado; 
    int resultado_dobro; 


    resultado = soma(7, 5); 
    printf("Resultado soma: %d", resultado); 

    resultado_dobro = dobro(8); 
    printf("Resultado dobro: %d\n", resultado_dobro); 

    mensagem();

    printf("Chamando  a função recursiva: "); 
    contagem(10); 

    return 0 ; 
}