#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    int numero; 
    int multiplicador; 

    for(int numero = 2; numero<=10; numero++){
        for(int multiplicador = 1; multiplicador <= 10; multiplicador++){
            printf(" %d X %d = %d \n", numero , multiplicador, numero*multiplicador);
        }
    }

   return 0; 
}