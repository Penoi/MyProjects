#include <stdio.h>
#include <stdlib.h>

int main(){
int a, b;

// entrada com 2 valores 
printf("Enter two integers: ");
scanf("%d %d", &a, &b);
// comparacao dos valores
printf("vendo qual é maior....\n");
if(a > b){
    printf("o numero %d, primeiro e maior\n", a);
} else if (b > a){
    printf("o numero %d, segundo e maior\n", b);
} else {
    printf("numeros sao iguais\n");
}
}

