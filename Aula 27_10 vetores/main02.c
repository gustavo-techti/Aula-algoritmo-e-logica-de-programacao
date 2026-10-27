#include<stdio.h>
#include <stdlib.h>
#include<locale.h>


int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    float notas[5]; 
    float soma = 0; 

    for(int i=0; i<5; i++){
        printf("Digite a %dº nota: ", i+1); 
        scanf("%f", &notas[i]); 

        soma += notas[i]; 
    }
    printf("O resultado foi: %2.f", soma); 
    return 0 ; 
}