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

typedef struct rand_vet{
    int *vals;
    int Tam;
}Rand;


void alloc(Rand* vals,Rand* Tam){
    if ( vals -> vals < Tam -> Tam){
        for( int i = 0;  i < Tam -> Tam; i++){
            vals -> vals[i] = rand() % 10;
        }
    }
}

    int main(void){

        Rand* vals  = malloc(sizeof(Rand));
        Rand* Tam  = malloc(sizeof(Rand));
        Tam -> Tam = 8 ;

        alloc(vals, Tam);
        for( int i = 0;  i < Tam -> Tam; i++){
            printf("%d\n",vals[i]);
        }
        free(vals);
        free(Tam);
    }



