#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    int numero; 
    for(numero = 1; numero <=10; numero++){
        if(numero == 5){
            break;
        }
        printf("%d\n", numero); 
    }
    

    return 0; 
}