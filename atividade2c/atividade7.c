#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, imposto;

    printf("digite seu salario: ");
    scanf("%f", &salario);
    if(salario < 600){
        printf("isento");
    }else if(salario >= 600 && salario < 1500){

        printf("voce sera tributado em: %.2f", (salario * 0.10));
    }
    else if(salario >= 1500){
        printf("voce sera tributado em: %.2f", (salario * 0.15));
    }


}