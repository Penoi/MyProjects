#include <stdio.h>
#include <stdlib.h>

int main(){
    float lado, area;

    printf("qual o lado do seu quadrado? ");
    scanf("%f", &lado);
    
    area = lado * lado;
    
    printf("a area do seu quadrado e: %.2f\n", area);
    return 0;



}