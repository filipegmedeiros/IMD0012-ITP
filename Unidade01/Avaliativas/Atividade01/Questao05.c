/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 01 - EXERCICIO 05
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

#include <stdio.h>

int main(void){
    float maior,decimal1, decimal2, decimal3 ;
//A)
    printf("Entre com 3 números decimais\n");
    scanf("%f %f %f", &decimal1,&decimal2,&decimal3);
    
//B)
    if ( decimal1 == decimal2 == decimal3 ){
        printf("Os 3 números são iguais");
//C)
    }else if( (decimal1 > decimal2) && (decimal1 > decimal3) ){
        maior = (decimal1);

    }else if( (decimal2 > decimal1) && (decimal2 > decimal3) ){ 
         maior = (decimal2);

    }else if( (decimal3 > decimal1) && (decimal3 > decimal2) ){ 
         maior = (decimal3);
    }
    printf("O maior é: %f\n",maior);
    return 0;
}
