/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 01 - EXERCICIO 07
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

#include <stdio.h>

int main(void){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    (a % 2) ? printf(" O Valor %d é impar\n",a) : printf(" O valor %d é par\n",a); 
    (b % 2) ? printf(" O Valor %d é impar\n",b) : printf(" O valor %d é par\n",b); 
    (c % 2) ? printf(" O Valor %d é impar\n",c) : printf(" O valor %d é par\n",c); 
    (d % 2) ? printf(" O Valor %d é impar\n",d) : printf(" O valor %d é par\n",d); 

    return 0;
}
