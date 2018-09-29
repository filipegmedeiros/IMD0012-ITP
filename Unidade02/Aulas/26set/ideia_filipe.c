/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 02 - EXERCICIO 01
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */


int binario();

int binario( int x){
// int binario( int x, int resultado_parcial[x], int i){
    int resultado_parcial[x] = {222};

    do{
        i = 1;
        resultado_parcial[i] = binario(x)/2;
        i++;
    }while( x =! 0);

    do{
        binario(x) = resultado_parcial[i];
    }while( i =! x);


    int main(){


        return 0;
    }
