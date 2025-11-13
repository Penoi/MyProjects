#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, num3, num4, quadrado1, quadrado2, quadrado3, quadrado4;

    printf("digite quatro numeros inteiros: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    
    
    quadrado1 = num1 * num1;
    quadrado2 = num2 * num2;
    quadrado3 = num3 * num3;
    quadrado4 = num4 * num4;
    
    
    printf("o quadrado dos numeros digitados sao: %d, %d, %d, %d\n", quadrado1, quadrado2, quadrado3, quadrado4);
    
    printf("a soma dos quadrados e: %d\n", quadrado1 + quadrado2 + quadrado3 + quadrado4);

    return 0;
}