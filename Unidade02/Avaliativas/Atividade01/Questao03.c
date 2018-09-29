/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 04 - EXERCICIO 01
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */
int main(int argc, char *argv[]) {
    int somaprod;
    int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int mat2[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int mat3[3][3];
    int linha=3, coluna=3;

    for(int i =0; i <linha; i++)
        for(int j =0; j <coluna ; j ++){
            somaprod=0;
            for(int k=0; k<linha ; k++){
                somaprod+=mat1[i][j]*mat2[k][j];
                mat3[i][j]=somaprod;
            }
        }
    //
    //imprime mat3
    //
    for(int i =0; i <linha; i++){
        for(int j =0; j <coluna ; j ++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
