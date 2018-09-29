/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 02 - EXERCICIO 08
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

int main(void) {
    int n=0, fat=1;
    
    printf("Digite um número:\n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        fat = fat*i;
    }

    printf("Fatorial de %d é: %d", n, fat);

    return 0;
}
