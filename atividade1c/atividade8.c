#include <stdio.h>
#include <stdlib.h>

int main(){
    int dtrabalhados;
    printf("quantos dias o eletricista trabalhou");
    scanf("%d", &dtrabalhados);
    printf("o salario total do eletricista e: R$ %.2f\n", dtrabalhados * 150.00);
    return 0;
}