/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 01 - EXERCICIO 11
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

#include <stdio.h>

int main(void){
    char *q="\
*********\n\
*       *\n\
*       *\n\
*       *\n\
*       *\n\
*       *\n\
*       *\n\
*       *\n\
*********\n\
";

   char *c="\
   ***\n\
 *     *\n\
*       *\n\
*       *\n\
*       *\n\
*       *\n\
*       *\n\
 *     *\n \
  ***\n\
";

    char *s="\
\n  *\n\
   ***\n\
  *****\n\
    *\n\
    *\n\
    *\n\
    *\n\
    *\n\
    *\n\
";
    char *d="\
\n     *\n\
      * *\n\
     *   *\n\
    *     *\n\
   *       *\n\
    *     *\n\
     *   *\n\
      * *\n\
       *\n\
";
    char entrada;
    printf("digite q, c, s ou d: ");
    scanf("%c", &entrada);

    switch(entrada){
        case 'q':
             printf("%s", q);
             break;
        case 'c':
            printf("%s", c);
            break;
        case 's':
            printf("%s", s);
            break;
        case 'd':
            printf("%s", d);
            break;
        default:
            printf("opção invalida");
    }
    return 0;
}
