/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 01 - EXERCICIO 01
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

#include <stdio.h>

int main(void){
    int n;
    float resp;
    scanf("%d", &n);
   float a[n];

    for (int i; i < n ; i++){
        scanf("%d", &a[i]);
    }
    resp = ((a[0]*2 + a[1]*3 + a[2]*5)/10);
    printf("%f,resp");



    return 0;
}
