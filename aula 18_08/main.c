#include <stdio.h>
#include <locale.h>
#include <string.h>
/*
toda variavel deve ter: tipo, valor, nome.

variaveis pode haver numeros, desde que ele nn seja o primeiro caracteres, nao utiliza palavras reservadas, ou seja, palavras q o propio sistema ja usa, tipo "int, float, chat, return". 
*/


// nomeAluno = camecase
// idade_aluno = snake_case
// é interessante vc ser consistente mo seu codigo, ou seja, se vc escolher camecase vc deve ir ate o fim com ela, se escolher o snakecase vai ate o final tbm.
/*
int main(){
    setlocale(LC_ALL, "portuguese"); 

    int idade = 30;
    float altura = 1.75f;
    char inicial = 'v';

    printf("idade: %d\n", idade);
    printf("altura: %.2f\n", altura);
    printf("inicial: %c\n", inicial);


    return 0;
}


int main(){
    setlocale(LC_ALL, "portuguese"); 

    int idadeAluno = 30;
    int copiaIdade = idadeAluno;

    printf("%d", copiaIdade);


    return 0;
}


int main(){

    int idadeAluno = 20;
    int anoAtual = 2026;
    int anoNascimento = anoAtual - idadeAluno;

    printf("Ano de Nascimento: %d \n", anoNascimento);

    return 0

}
*/

int main (){

    int quantidade = 3;
    float preco = 10.5;
    float total = quantidade * preco;

    printf("total: %.2f", total);

    return 0;
}
