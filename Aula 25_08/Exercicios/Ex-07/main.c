#include <stdio.h>
int main(){
    int ts = 7384; 
    int min = ts/60; 
    int horas = ts / 3600;

    printf("O valor convertido para horas e: %d \n e para minutos e: %d \n", horas, min); 

    return 0; 
}