/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 05 - EXERCICIO 01
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */
#include <stdio.h>
#include <string.h>


int tamanho(char *string){
    int size;
    size = strlen(string);
    sprintf(string, "%d", size);
    return string;
}

int compara(char *stringA, char *stringB){
    strcmp(stringA, stringB) == 0 ? (printf(" 1") ) : printf("0");
}

void copia(char *dest, char *base){
    strcpy(dest, base);
}



int main(void){

char *entrada = "Eu sou eu"
char *saida = "Eu sou eu"

copia(entrada, saida);
compara(entrada,saida)
tamanho(entrada);


return 0;
}
