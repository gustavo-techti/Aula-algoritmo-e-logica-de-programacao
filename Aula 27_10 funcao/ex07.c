#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

void numero(int a, int b){
if(a>b){
    printf("O numero %d é maior que %d. \n", a, b); 
}else{
    printf("O numero %d é maior que %d. \n", b, a);
}
}
    


int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8");

    numero(4, 5); 

    
    return 0 ; 
}