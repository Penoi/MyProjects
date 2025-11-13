#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, num3, num4, media;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    printf("Digite o quarto número: ");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4) / 4;

    printf("A média dos quatro números é: %.2f\n", media);

    return 0;
}