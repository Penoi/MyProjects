#include <stdio.h>
#include <stdlib.h>

int main(){
    float valoremprestimo, parcela, salario;
    printf("qual o valor do emprestimo? ");
    scanf(" %f", &valoremprestimo);
    
    printf("qual a quantidade porcela? ");
    scanf(" %f", &parcela);

    printf("qual seu salario? ");
    scanf(" %f", &salario);

    if((valoremprestimo / parcela) > (salario * 0.3)){
        printf("emprestimo nao concedido\n");
}
else{
    printf("emprestimo concedido\n");
}
}