/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 06 - EXERCICIO 03
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct StructA{
    int fieldA;
    float fieldB;
    char *fieldC;
    int  *fieldD;
} structA;

void criar_struct(StructA* var_StructA){

    var_StructA -> fieldC = malloc(sizeof(char)*30);
    strcpy(var_StructA,"“Questão Struct Básica”");

    StructA -> fieldA =  rand() % 10;
    StructA -> fieldB =  rand() % 10;
    for(int i = 1; i < 11 ; i++){
        StructA -> fieldD[i] = rand() % 10 ;
    }

}


int main(void){

    StructA* var_StructA = malloc(sizeof(StructA));

    criar_struct(var_StructA);

    printf("\nO Field A : \n");
    printf("%d ", var_StructA -> fieldA);

    printf("\nO Field B : \n");
    printf("%f ", var_StructA -> fieldB);

    printf("\nO Field C : \n");
    printf("%s ", var_StructA -> fieldC);

    printf("\nO Field D : \n");
    for(int i = 1; i < 11 ; i++){
        printf("%d ", var_StructA -> fieldD[i]);
    }


    return 0;
}



