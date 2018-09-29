/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 02 - EXERCICIO 09
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

#include <stdio.h>

int main(void) {
  int n=0;
  double e=1, fat=1;
  printf("digite um número:");
  scanf("%d", &n);
  
    for(int k=1; k<=n; k++){
      for(int i=1; i<=k; i++){
        fat = fat*i;      
      }
      e = e + (1/fat);
      fat = 1;
    }
  
  printf("e é: %lf", e);
  return 0;
}
