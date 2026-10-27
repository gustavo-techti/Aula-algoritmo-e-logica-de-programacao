#include<stdio.h>
#include <stdlib.h>
#include<locale.h>


int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    int idade[5] = {10, 20, 30, 40, 50}; 

    printf("%d\n", idade[0]); 
    printf("%d\n", idade[1]); 
    printf("%d\n", idade[2]); 
    printf("%d\n", idade[3]); 
    printf("%d\n", idade[4]); 
    
    return 0 ; 
}