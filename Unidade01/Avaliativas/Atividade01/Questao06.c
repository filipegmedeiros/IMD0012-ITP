/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 01 - EXERCICIO 06
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/
#include <stdio.h>
#include <math.h>

// Não esquecer de linkar a lib do math no gcc com (-lm)
int main(void){
    int diam, comp, area, raio;
//A)
    printf("Entre com o raio do círculo\n");
    scanf("%d", &raio);
//B)
    diam = (raio*2);
    comp = (M_PI*diam);
    area = (M_PI*(pow(raio,2)));
//C)
    printf("O Diametro é: %d e o comprimento é %d, por fim, a área é %d\n",diam,comp,area);
    
    return 0;
}
