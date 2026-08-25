#include <stdio.h>

int main(){
    int ts = 3675;
    int resto = ts % 60;
    int minutos = (ts-resto)/60;

    printf("Os minutos completos e: %d \n", minutos ); 
    printf("Os segundos retantes e: %d \n", resto );

}