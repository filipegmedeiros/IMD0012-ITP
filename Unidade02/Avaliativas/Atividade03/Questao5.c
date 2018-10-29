/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 06 - EXERCICIO 05
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */
#include <stdlib.h>
#include <stdio.h>

typedef struct matriz{

    int** __matriz__;
    int linha;
    int coluna;
} matriz;

void criar_matriz(matriz* matriz, int linha, int coluna){

    matriz -> linha = linha;
    matriz -> coluna = coluna;
    matriz -> __matriz__ = calloc(linha, sizeof(int*));

    for(int i = 0; i < linha ; i++)
        matriz -> __matriz__[i] = calloc(coluna, sizeof(int*));
}


void mat_mult(matriz* matriz_a, matriz* matriz_b, matriz* matriz_resultado){
    if( (matriz_a -> coluna) != (matriz_b -> linha) ) {
        printf("É necessário que o número de colunas da matriz 1 seja igual ao número de linhas da matriz 2 ");
        exit(-1);
    }

    for(int i = 0; i < matriz_a -> linha; i++){
        for(int j = 0; j < matriz_b -> coluna; j++){
            for(int k = 0; k < matriz_a -> coluna; k++){
                matriz_resultado -> __matriz__[i][j] += (matriz_a -> __matriz__[i][k]) * (matriz_b -> __matriz__[k][j]);
            }
        }
    } 
}
int main(void){
    int lin1, col1;
    int lin2, col2;
    printf("Entre com a quantidade de linhas e colunas da Matriz 1:\n");
    scanf(" %d %d", &lin1, &col1);

    printf("Entre com a quantidade de linhas e colunas da Matriz 2:\n");
    scanf(" %d %d", &lin2, &col2);

    matriz* matriz_a = malloc(sizeof(matriz));
    matriz* matriz_b = malloc(sizeof(matriz));
    matriz* matriz_resultado = malloc(sizeof(matriz));

    criar_matriz(matriz_a, lin1, col1);
    criar_matriz(matriz_b, lin2, col2);
    criar_matriz(matriz_resultado, lin1, col2);

    for(int i = 0; i < matriz_a -> linha; i++){
        for(int j = 0; j < matriz_a -> coluna; j++){
            matriz_a -> __matriz__[i][j] = rand() % 10 ;
        }
    }    

    for(int i = 0; i < matriz_b -> linha; i++){
        for(int j = 0; j < matriz_b -> coluna; j++){
            matriz_b -> __matriz__[i][j] = rand() % 10 ;
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
    printf("\nA matriz A * B: \n");    

    mat_mult(matriz_a, matriz_b, matriz_resultado);
    for(int i = 0; i < matriz_resultado -> linha; i++){
        for(int j = 0; j < matriz_resultado -> coluna; j++){
            printf("%d ", matriz_resultado ->__matriz__[i][j]);
        }
        printf("\n");
    }
    free(matriz_a);
    free(matriz_b);
    free(matriz_resultado);
    return 0;
}



