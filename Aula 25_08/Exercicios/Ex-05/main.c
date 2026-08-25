#include <stdio.h>
int main (){
    float preco = 25.5, quantidade = 4, total = preco * quantidade, desconto = (total*10)/100, total_final = total * 0.9;


    printf("o preco e: %.2f \n", preco);
    printf("a quantidade e: %.2f \n", quantidade);
    printf("O total sem desconto e: %.2f \n", total);
    printf("o valor do desconto e: %.2f \n", desconto);
    printf("o valor final, ja com desconto e: %.2f \n", total_final);

    return 0; 
}
