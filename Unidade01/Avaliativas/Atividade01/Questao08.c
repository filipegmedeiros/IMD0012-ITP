/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 01 - EXERCICIO 08
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/
#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    (a % b) ? printf("O Valor %d não é múltiplo de %d\n",a,b) : printf("O Valor %d é múltiplo de %d\n",a,b); 
     
return 0;
}
