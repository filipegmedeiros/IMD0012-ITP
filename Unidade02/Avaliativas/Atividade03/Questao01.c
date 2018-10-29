/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 06 - EXERCICIO 01
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */
#include <stdlib.h>
#include <stdio.h>

int main(void){
    int *vet_int1, *vet_int2;
    vet_int1 = malloc(sizeof(int));
    vet_int2 = malloc(sizeof(int));

for( int i = 1; i < 11; i++){
    vet_int1[i] = rand() % 10;
    vet_int2[i] = rand() % 10;
}


char *vet_string;
vet_string = malloc(sizeof(char)*20);
strcpy(vet_string,"Questao 1");
    printf("%s\n", vet_string);


float *vet_float;
vet_float = malloc(sizeof(float)*10);

for(int i = 1 ;i < 11; i++){
    vet_float[i]= M_PI*(i);
    printf("%f\n", vet_float[i]);
}
 
    return 0;
}



