#include <stdio.h>
#include <stdlib.h>

int main(){
float valorpaga;
int quantidade;
printf("quantas voce comprou? ");
scanf("%d", &quantidade);
if(quantidade < 12){
    valorpaga = quantidade * (0.30);
    printf("voce pagara: %.2f\n", valorpaga);

} 

if(quantidade >= 12){
    valorpaga = quantidade * (0.25);
    printf("voce pagara: %.2f\n", valorpaga);
    
}

}