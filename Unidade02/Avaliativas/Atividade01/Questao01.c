/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 04 - EXERCICIO 01 e 02
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */
#include <stdlib.h>
#include <stdio.h>

typedef struct Matriz{

    int** __matriz__;
    int linha;
    int coluna;
} matriz;

int criar_matriz(matriz* matriz, int linha, int coluna){

    matriz -> linha = linha;
    matriz -> coluna = coluna;
    matriz -> __matriz__ = calloc(linha, sizeof(int*));

    for(int i = 0; i < linha ; i++)
        matriz -> __matriz__[i] = calloc(coluna, sizeof(int*));
}

int matsum(matriz* matriz_a, matriz* matriz_b){

    if( (matriz_a -> linha) != (matriz_b -> linha) || (matriz_a -> coluna) != (matriz_b -> coluna)){
        return -1;
    }

    for(int i = 0; i < matriz_a -> linha; i++){
        for(int j = 0; j < matriz_a -> coluna; j++){
            matriz_a -> __matriz__[i][j] += matriz_b  -> __matriz__[i][j] ;
        }
    }
}


int matsub(matriz* matriz_a, matriz* matriz_b){

    if( (matriz_a -> linha) != (matriz_b -> linha) || (matriz_a -> coluna) != (matriz_b -> coluna)){
        return -1;
    }

    for(int i = 0; i < matriz_a -> linha; i++){
        for(int j = 0; j < matriz_a -> coluna; j++){
            matriz_a -> __matriz__[i][j] -= matriz_b  -> __matriz__[i][j] ;
        }
    }
}
int main(void){
    int lin, col;
    printf("Entre com a quantidade de linhas e colunas:\n");
    scanf(" %d %d", &lin, &col);

    matriz* matriz_a = malloc(sizeof(matriz));
    matriz* matriz_b = malloc(sizeof(matriz));

    criar_matriz(matriz_a, lin, col);
    criar_matriz(matriz_b, lin, col);

    for(int i = 0; i < matriz_a -> linha; i++){
        for(int j = 0; j < matriz_a -> coluna; j++){
            matriz_a -> __matriz__[i][j] = (rand() % 10);
        }
    }    

    for(int i = 0; i < matriz_b -> linha; i++){
        for(int j = 0; j < matriz_b -> coluna; j++){
            matriz_b -> __matriz__[i][j] = (rand() % 10);
        }
    }

    printf("\nA matriz A: \n");
    for(int i = 0; i < matriz_a -> linha; i++){
        for(int j = 0; j < matriz_a -> coluna; j++){
            printf("%d ", matriz_a -> __matriz__[i][j]);
        }
        printf("\n");
    }
    printf("\nA matriz B: \n");

    for(int i = 0; i < matriz_b -> linha; i++){
        for(int j = 0; j < matriz_b -> coluna; j++){
            printf("%d ", matriz_b -> __matriz__[i][j]);
        }
        printf("\n");
    }
    printf("\nA matriz A + B: \n");    


    matsum(matriz_a, matriz_b);
    for(int i = 0; i < matriz_b -> linha; i++){
        for(int j = 0; j < matriz_b -> coluna; j++){
            printf("%d ", matriz_a->__matriz__[i][j]);
        }
        printf("\n");
    }
    printf("\nA matriz A - B: \n");    

    matsub(matriz_a, matriz_b);
    for(int i = 0; i < matriz_b -> linha; i++){
        for(int j = 0; j < matriz_b -> coluna; j++){
            printf("%d ", matriz_a ->__matriz__[i][j]);
        }
        printf("\n");
    }
    free(matriz_a);
    free(matriz_b);
    return 0;
}
