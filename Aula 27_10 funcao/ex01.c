#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

void boasvindas(){
    printf("Boas Vindas!!!"); 
}

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    boasvindas(); 

    
    return 0 ; 
}