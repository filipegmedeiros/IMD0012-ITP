/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 02 - EXERCICIO 06
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/


#include <stdio.h>

int main(void){
    int n1 = 0, n2 = 0, mdc = 0;
    int high = 0, low = 0;

    printf("Digite n1 e n2:\n");
    scanf("%d %d", &n1, &n2);

    if(n2 > n1){
         high = n2;
         low = n1;
    }else{
        low = n2;
        high = n1;
    }
    printf("Os multiplos de 2 são: \n");
    
    for(int i = high + 1; i < high; i++){
        if( i % 2 == 0){
            printf("%d \n", i);
        }
    }

    for(int i = 1; i <= high; i++){
        if((n1 % i== 0) && (n2 % i== 0)){
            mdc = i;
        }
    }

    printf("MDC: %d\n", mdc);

return 0;
}
