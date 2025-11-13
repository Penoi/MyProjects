#include <stdio.h>
#include <stdlib.h>


int main(){
    float totalpremio, divi;

    printf("digite o valor total do prêmio em dinheiro: ");
    scanf("%f", &totalpremio);
    divi = totalpremio / 3;
    printf("cada ganhador receberá: %.2f\n", divi);
    return 0;
}