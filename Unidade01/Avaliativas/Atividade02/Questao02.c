/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 02 - EXERCICIO 02
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/
#include <stdio.h>

int main(void){
// A
    int n1,n2;
    scanf( "%d %d", &n1,&n2);

    if (n1 == n2){
        printf(" Sao Iguais\n");
    }else if ( n2 < n1 ){ //B
        for (int i = n2+1; i < n1; i++ ){
            printf("%d", i);
        }
    }else{ // C
        for (int i = n1+1; i <= n2; i++ ){
            printf("%d", i);
        }
    }
    return 0;
}
