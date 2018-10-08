#include <stdio.h>
#include <stdlib.h>



typedef struct node_t{
    int dados;
    struct node_t* proximo; //referencia para o proximo elemento
} node;

typedef struct lista{
    node *primeiro_elemento;
    int tamanho = 20;
}lista;




int main(void){


    node* dado;

    int valor;
    lista* lista_ = malloc(sizeof(lista));
    node* dado_01 = malloc(sizeof(no));

    dado_01 -> dados = rand() % 10;

    dado_01 -> proximo =  NULL;

    //NO 02

    node* dado_02 = malloc(sizeof(no));

    dado_01 -> proximo = dado_02;

    dado_02 -> dados = rand() % 10;

    dado_02 -> proximo = NULL;
// FAZER PARA N NODES
   for (i; i < tamanho){
   
   } 
    
    //IMPRIMIR
    do{
        printf("%d |",dados -> dados_01);
        dados = dados -> proximo ;
    }while(act!=NULL);
}
