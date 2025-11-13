#include <stdio.h>
#include <stdlib.h>

int main() {
int preco, quantidade;
printf("Digite o preço do produto: ");
scanf("%d", &preco);
printf("Digite a quantidade comprada: ");
scanf("%d", &quantidade);
printf("O preço total da compra é: %d\n", preco * quantidade);

    return 0;
}