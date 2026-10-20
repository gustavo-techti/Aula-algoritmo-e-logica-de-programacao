#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    system("chcp 65001 > nul"); 
    setlocale(LC_ALL, "pt-BR.UTF-8"); 

    // O "break" ele encerra o laço por completo quando chega na condição, já o "continue" ele apenas pula a contição e continua todo o programa normalmente.  
}