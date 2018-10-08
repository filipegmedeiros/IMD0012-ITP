/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 04 - EXERCICIO 03
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */
#include <stdio.h>
#include <stdlib.h>

float sum( float i,int n, float x){
    if  ( i <= n) {

        return  x/i + sum(i + 1,n,x);
    }
    return 0;
}




int main(void){
    printf("%f \n",sum(1,2,1));

}



