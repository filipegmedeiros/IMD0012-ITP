/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 05 - EXERCICIO 03
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */

#include <stdio.h>
#include <string.h>
#include <string.h>
#include <ctype.h>

int posicao(char *string){
    int num1, num2, contador,w;
    char op1, op2;


    w=0;
    while(string[w]!= '\0'){
        if(!(isdigit(string[w])) && !(isspace(string[w]))){
            contador++;
        }
        w++;
    }
    if(contador == 1){
        sscanf(string, "%i %c %i", &num1, &op1, &num2);
        if(op1=='>'){
            if(num1>num2)
                return 1;}
        else
            return 0;
    }

    if(contador == 2){
        sscanf(string, "%i %c %c %i", &num1, &op1, &op2, &num2);
        if(op1=='>'){
            if(num1>=num2)
                return 1;}
        else
            return 0;
    }

}


void pessoaToString (char *nome, int idade, char sexo, char *dest){
    sprintf(dest, "Meu nome e %s, minha idade e %i e meu sexo e %c", nome, idade, sexo);
}
void intVecToString(int tam, int vec[tam], char *dest){
    char destiny[50];

    for(int i=0;i<tam;i++){
        sprintf(destiny, "%d", vec[i]);
        dest[i] = *destiny;
    }
}
int posicao(char *string){
    int num1, num2, contador,w;
    char op1, op2;


    w=0;
    while(string[w]!= '\0'){
        if(!(isdigit(string[w])) && !(isspace(string[w]))){
            contador++;
        }
        w++;
    }
    if(contador == 1){
        sscanf(string, "%i %c %i", &num1, &op1, &num2);
        if(op1=='>'){
            if(num1>num2)
                return 1;}
        else
            return 0;
    }
    if(contador == 2){
        sscanf(string, "%i %c %c %i", &num1, &op1, &op2, &num2);
        if(op1=='>'){
            if(num1>=num2)
                return 1;}
        else
            return 0;
    }

}


void pessoaToString (char *nome, int idade, char sexo, char *dest){
    sprintf(dest, "Meu nome e %s, minha idade e %i e meu sexo e %c", nome, idade, sexo);
}


void intVecToString(int tam, int vec[tam], char *dest){
    char destiny[50];

    for(int i=0;i<tam;i++){
        sprintf(destiny, "%d", vec[i]);
        dest[i] = *destiny;
    }
}
int main(void){
    char linha[] = "20 < 18";
    int retorno = posicao(linha);
    printf("%i", retorno);
    int size = 4;
    int vector[] = {1,2,3,4};
    char vetor[size];

    intVecToString(size, vector, vetor);
    char linha[] = "20 < 18";
    int retorno = posicao(linha);
    printf("%i\n", retorno);

    char name[]="Leandro";
    int age = 25;
    char gender='m';
    char phrase[50];
    pessoaToString(name, age, gender, phrase);
    printf("%s\n", phrase);


    int size = 4;
    int vector[] = {1,2,3,4};
    char vetor[size];

    intVecToString(size, vector, vetor);

    printf("[%s]", vetor);
    printf("[%s]", vetor);

}



