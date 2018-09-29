/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 01 - EXERCICIO 09
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

#include <stdio.h>

int main(void){
    int a,i;
    int vetor[7] = {0};
    printf("Entre com um valor\n");
    scanf("%d",&a);

    while ( (a > 0) && (a <= 1000000)){
         printf("%d\n",a % 10);
         a = (a/10);

    }



  return 0;
}
