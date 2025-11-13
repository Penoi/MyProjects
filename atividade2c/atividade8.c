#include <stdio.h>
#include <stdlib.h>


int main(){

    int a, b, c;
    printf("entre com 3 valores: ");
    scanf("%d %d %d", &a, &b, &c);
if(a < b && a < c){
    printf("o primeiro numero e menor");
}
else if(b < a && b < c){
    printf("o segundo numero e menor");
}
else{
    printf("o terceiro numero e menor");
}
}