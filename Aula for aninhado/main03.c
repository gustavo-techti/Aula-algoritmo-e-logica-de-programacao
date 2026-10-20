#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    int numero; 
    for(numero = 1; numero <=10; numero++){
        if(numero == 5){
            printf("Encontrou!!!."); 
            continue; //so nn vai imprimiri a condição q está dentro do if, neste caso o 5, ai continua normal, ira imprimir " 1, 2, 3, 4, 6, ,7 8, 9, 10."
        }
        printf("%d\n", numero); 
    }
    

    return 0; 
}