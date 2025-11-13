#include <stdio.h>
#include <stdlib.h>

int main(){
    float salarioatual, novosalario;
    printf("qual o salario atual do trabalhador? ");
    scanf("%f", &salarioatual);
    novosalario = salarioatual * 1.25;
    printf("o novo salario do trabalhador e: R$ %.2f\n", novosalario);
    return 0;

}