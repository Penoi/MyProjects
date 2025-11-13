#include <stdio.h>
#include <stdlib.h>

int main(){
    float dias, km, totalpagar;

    printf("Digite a quantidade de dias alugados: ");
    scanf("%f", &dias);
    printf("Digite a quantidade de km percorridos: ");
    scanf("%f", &km);
    totalpagar = (dias * 60) + (km * 0.15);

    printf("\no total a pagar e: R$ %.2f\n", totalpagar);
    return 0;





}