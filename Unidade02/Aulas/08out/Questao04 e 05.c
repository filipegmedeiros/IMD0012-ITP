/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 04 - EXERCICIO 03
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */
#include <stdlib.h>
#include <stdio.h>

void print_rec(int *v, int tam, int i){
    if ( i < tam ){
        printf("%d \n",v[i]);
        i++;
        print_rec(v,5,i);

    }
}




int main(void){
    int vetor[] = {1,2,3,4,5};
    print_rec((int*) vetor,5,0);
    return 0;

}

