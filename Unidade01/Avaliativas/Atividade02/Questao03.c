/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 02 - EXERCICIO 03
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

#include <stdio.h>


int main(void){
    int vetor_numero, quantidade_de_numeros;
    int numeros[quantidade_de_numeros];
    int numeros_ordenado[quantidade_de_numeros]; 

    float soma = 0;

    printf("Digite a  quantidade de Números:");
    scanf("%d", &quantidade_de_numeros);

    for(int i = 0; i < quantidade_de_numeros; i++){
        printf("Insira o %dº número:", i+1);
        scanf("%d", &vetor_numero);

        numeros[i] = vetor_numero;

        numeros_ordenado[i] = vetor_numero;
        soma = soma + vetor_numero;  

    }
    for(int j = 0; j < quantidade_de_numeros; j++){
        int k = 0; 
        for(int l = 0; l < quantidade_de_numeros; l++){
            if(numeros[j] > numeros[k]){
            k++;    
        }
    }
        if(k > 0){
            numeros_ordenado[k]=numeros[k];
        }else if(k == 0){
            numeros_ordenado[0]=numeros[k];
        }
}

    printf("\no menor nº é: %d\n", numeros_ordenado[quantidade_de_numeros-1]);

    printf("O maior nº é: %d\n", numeros_ordenado[0]);

    printf("Os dois menores nº são: %d, %d\n", numeros_ordenado[quantidade_de_numeros-1], numeros_ordenado[quantidade_de_numeros-2]);

    printf("Os dois maiores nº são: %d, %d\n", numeros_ordenado[0], numeros_ordenado[1]);

    printf("A média é: %f", soma/quantidade_de_numeros);

    return 0;
}
