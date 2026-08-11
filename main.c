#include <stdio.h> //Inclui varias bibliotecas
/*
int main() {

    // execulta o programa
    printf("\"ola\"\n");
    printf("Nome:\tGustavo Batista Corado\n");
    printf("Idade:\t18 anos\n");



    return 0; // serve para ter o retorno 0, que no caso não tem erros, se ouver erros, ele sera mostrado 
    //"cls" apaga os comandos anteriores do terminal
    */

    // \n quebra a linha, \t da um tab, \" s \"  o texto dentro do \" fica entre aspas
    // \\ o texto fica entre barras 
    // %d, comprova q o proximo dado sera um numero 

    // Especificadores de formato
    /*
    %d = inteiro
    %f = float
    %c = caracters
    %s = string 

    */
   /*
int main() {
    printf("%d\n", 25);
    printf("%f\n", 10.5);
    printf("%.2f\n", 10.5) ;// o %.f define quantas casa decimais eu qro q o numero tenha 
    printf("%c\n", 'a');
    printf("%s\n", "Hello, world");
    printf("==================\n");
    printf("O meu nome e %s e tenho %d", "Gustavo Corado", 25);

    return 0;
}
*/
int main() {
 printf("================\n");
 printf("\tMEU PERFIL\n");
 printf("================\n");
 printf("NOME:" "%S" "GUSTAVO CORADO");
 printf("IDADE:" "%f", 18);
 printf(""linguagem C");


    return 0;
}