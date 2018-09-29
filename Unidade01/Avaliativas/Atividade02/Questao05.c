/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 02 - EXERCICIO 05
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

#include <stdio.h>

int main(void) {
    char op;
    int l = 0;

    printf("Escolha c, o ou t:\n");
    scanf("%c", &op);

    printf("Determine o valor de l\n:");
    scanf("%d", &l);

    switch(op){
    
        case 'c':
            for(int i = 1; i <= l; i++){
                printf("\n");
                
                for(int j = 1; j <= l; j++){
                    printf("*");
                }
            }
            break;

        case 'o':
            for(int i = 1; i <= l; i++){
                printf("\n");
                for(int j = 1; j <= l; j++){
                    if(i==1 || i==l){
                        printf("*");

                    }else if(j==1 || j==l){
                        printf("*");
                    
                    }else{
                    printf(" ");
                    }
                }
            }
            break;

        case 't':
            for(int i = 1; i <= l; i++){
                printf("\n");
                for(int j = 1; j <= i; j++){
                    printf("*");
                }
            }
            break;
        
        default:
            printf("opção invalida.");
            break;
    }
    return 0;
}

