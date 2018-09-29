#include <stdio.h>
#include <stdlib.h>



typedef struct no_t{
    int dados;
    struct no_t* proximo; //referencia para o proximo elemento
} no;

typedef struct lista{
    no *primeiro_elemento;
    int tamanho = 20;
}lista;




int main(void){


    no* dado;

    int valor;
    lista* lista_ = malloc(sizeof(lista));
    no* dado_01 = malloc(sizeof(no));

    dado_01 -> dados = rand() % 10;

    dado_01 -> proximo =  NULL;

    //NO 02

    no* dado_02 = malloc(sizeof(no));

    dado_01 -> proximo = dado_02;

    dado_02 -> dados = rand() % 10;

    dado_02 -> proximo = NULL;
    //NO 03
    no* dado_03 = malloc(sizeof(no));

    dado_03 -> dados = rand() % 10;

    dado_03 -> proximo = NULL;

    dado_02 -> proximo = dado_03;

    //NO 04
    no* dado_04 = malloc(sizeof(no));

    dado_04 -> dados = rand() % 10;

    dado_04 -> proximo = NULL;

    dado_03 -> proximo = dado_04;
    //NO 05
    no* dado_05 = malloc(sizeof(no));

    dado_05 -> dados = rand() % 10;

    dado_05 -> proximo = NULL;

    dado_04 -> proximo = dado_05;

    //NO 06
    no* dado_06 = malloc(sizeof(no));

    dado_06 -> dados = rand() % 10;

    dado_06 -> proximo = NULL;

    dado_05 -> proximo = dado_06;


    //NO 07
    no* dado_07 = malloc(sizeof(no));

    dado_07 -> dados = rand() % 10;

    dado_07 -> proximo = NULL;

    dado_06 -> proximo = dado_07;

    //NO 08
    no* dado_08 = malloc(sizeof(no));

    dado_08 -> dados = rand() % 10;

    dado_08 -> proximo = NULL;

    dado_07 -> proximo = dado_08;

    //NO 09
    no* dado_09 = malloc(sizeof(no));

    dado_09 -> dados = rand() % 10;

    dado_09 -> proximo = NULL;

    dado_08 -> proximo = dado_09;

    //NO 10
    no* dado_10 = malloc(sizeof(no));

    dado_10 -> dados = rand() % 10;

    dado_10 -> proximo = NULL;

    //NO N
    int n = 20;
    for(int i = 11 ; i < n ; i++){
        no* dado_i = malloc(sizeof(no));
        dado_i -> dados = rand() % 10;
        dado_i -> proximo = NULL;
    }

    //IMPRIMIR 

    printf("%d", lista -> *primeiro_elemento);
    for( int i; i < (lista -> tamanho); i++ ){
        printf("%d", dado_i -> dados);
    }
}

do{
    printf("%d |",act->x);
    act=act->next;
}while(act!=NULL);
}
