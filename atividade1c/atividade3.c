#include <stdio.h>
#include <stdlib.h>

int main() {
    int km, litros;
    float consumo;

    printf("qual a distancia percorrida em km? ");
    scanf("%d", &km);
    printf("quantos km por litro faz seu carro? ");
    scanf("%d", &litros);
    consumo = km / (float)litros;

    printf("sera necessario %.2f litros de combustivel para percorrer %d km\n", consumo, km);

    return 0;
}