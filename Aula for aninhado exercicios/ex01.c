#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    for(int i=1; i<=10; i++){
        if(i==7){
            break;
        }
        printf("Numero: %d\n", i); 
    }

    return 0; 
}