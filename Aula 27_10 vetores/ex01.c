#include<stdio.h>
#include <stdlib.h>
#include<locale.h>


int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int idades[4] = {10, 20, 30, 40}; 

    for(int i= 0 ; i<4; i++){
        printf("%d\n", idades[i]); 
    }
    
    return 0 ; 
}