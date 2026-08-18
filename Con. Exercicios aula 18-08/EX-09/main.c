#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char nome[50] ="Gustavo";
    int idade = 18;
    float altura = 1.76, n1 = 10, n2 = 9.8, n3 = 10, media = (n1+n2+n3)/3;


    printf("FIXA DO ALUNO\n");
    printf("Nome do aluno: %s\n", nome);
    printf("A idade do aluno e: %d\n", idade);
    printf("A altura do aluno e: %.2f\n", altura);
    printf("A nota 1 do aluno e: %.2f\n", n1);
    printf("A nota 2 do aluno e: %.2f\n", n2);
    printf("A nota 3 do aluno e: %.2f\n", n3);
    printf("A media do aluno e: %.2f\n", media);

    return 0;
}