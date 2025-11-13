#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("digite 2 numeros ");
    scanf("%d %d", &a, &b);
    if(a < 1){
        printf("valor do primeiro numero e invalido\n");
    }else{
        printf("o quadrado do primeiro numero e: %d\n", a * a);
    }
    if(b < 1){
        printf("valor do segundo numero e invalido\n");
    }else{
        printf("o quadrado do segundo numero e: %d\n", b * b);
    }


    
    

}