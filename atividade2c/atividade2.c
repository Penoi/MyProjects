#include <stdio.h>
#include <stdlib.h>


int main(){
   int a;

   printf("entre com um numero ");
   scanf("%d", &a);
    if((a % 2) == 0){
        printf("numero par\n");
    }
    else{
        printf("numero impar\n");
    }
    return 0;
}