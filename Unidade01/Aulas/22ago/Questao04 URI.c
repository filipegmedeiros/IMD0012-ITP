/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 01 - EXERCICIO 01
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    int s;
    scanf("%d",s);
    float vet[s];
    float resp[s];

    for ( int i = 0 ; i < s ; i++ ){
        scanf("%f",&vet[i]);
        resp[i] = ( ( 1 + pow(sqrt(5),vet[i] ) - (1-pow(sqrt(5),vet[i]))) /( pow(2,vet[i])*sqrt(5) ) );

        printf("%f ",resp[i]);
    }
    return(0);
}


