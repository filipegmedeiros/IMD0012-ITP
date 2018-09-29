/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 01 - EXERCICIO 10
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

#include <stdio.h>

int main(void){
    int x=0, y=0;
    printf("Escreva o valor de X ");
    scanf("%d", &x);

// Criando a Tabela
    printf("\n(y-2)^2 \t (y-1)^2 \t y \t (y+1)^2 \t (y+2)^2");

    for(int i = -2; i <= 2; i++){
        y = (x + i);

        printf("\n  %d",( (y-2)*(y-2) ) );
        printf("\t\t  %d",( (y-1)*(y-1) ) );
        printf("\t\t %d", y);
        printf("\t  %d",( (y+2)*(y+2) ) );
        printf("\t\t  %d",( (y+1)*(y+1) ) );
    }
    return 0;
}

