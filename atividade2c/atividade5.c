#include <stdio.h>
#include <stdlib.h>

int main(){
        int sexo;
        float altura, pesoideal;

        printf("qual o sexo?\n1 - masculino\n2- feminino\n");
        scanf(" %d", &sexo);
       

        if(sexo == 1){
        printf("qual a altura? ");
        scanf(" %f", &altura);            
        
            pesoideal = (72.7 * altura) - 58;
            printf("o peso ideal para essa pessoa e: %.2f", pesoideal);

        }else if(sexo == 2){
            printf("qual a altura? ");
            scanf(" %f", &altura);

            printf("passou aq");
            pesoideal =  (62.1 * altura) - 44.7;


            printf("o peso ideal para essa pessoa e: %.2f", pesoideal);

        }else{

        printf("entrada invalida");
        }


}