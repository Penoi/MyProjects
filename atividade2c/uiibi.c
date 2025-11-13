#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2, num3, menor;
    printf("entre com 3 numeros");
    scanf("%f %f %f", &num1, &num2, &num3);
    menor = num1;
    if(menor > num2){
        menor = num2;
    }
    if(menor > num3){
        menor = num3;
    }
    printf("o menor numero e: %.2f", menor);


}