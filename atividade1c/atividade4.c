#include <stdio.h>
#include <stdlib.h>

int main(){

int num1, num2, restodivisao;

printf("Digite um número inteiro: ");
scanf("%d", &num1);
printf("Digite outro número inteiro: ");
scanf("%d", &num2);

restodivisao = num1 % num2;

printf("O resto da divisão de %d por %d é: %d\n", num1, num2, restodivisao);

return 0;



}