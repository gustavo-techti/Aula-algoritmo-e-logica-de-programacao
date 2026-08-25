#include <stdio.h>
/*
int main (){

    int n1, n2;

    printf("Digite o primeiro numero, por favor:");
    scanf("%d", &n1);
    printf("Digite o segundo numero, por favor:");
    scanf("%d", &n2);

    printf("o resultado da soma dos numeros e: %df \n",  n1+n2); 
    printf("o resultado da subtracao dos numeros e: %d \n",  n1-n2);
    printf("o resultado da multilicacao dos numeros e: %d \n",  n1*n2);
    printf("o resultado da divisao dos numeros e: %d \n",  n1/n2);
}
*/

int main (){
    int idade ;
    float altura;
    double peso;
    char inicial;

    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("Digite a sua altura:");
    scanf("%f", &altura);
    printf("Digite o seu peso:");
    scanf("%lf", &peso);
    printf("Digite a sua inicial:");
    scanf(" %c", &inicial);
     

     printf("A sua idade e: %d \n", idade);
     printf("A sua altura e: %f \n", altura);
     printf("O seu peso e: %lf \n", peso);
     printf("A sua inicial e: %d \n", inicial);
    
}