/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 01 - EXERCICIO 01
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/

// A)
    int c,var,v,number;

// B)
    int a;
    printf("Entre com um valor inteiro:");
    scanf("%d", &a);
// C)
    double  a;
    printf("Entre com um valor decimal:\n");
    scanf("%lf", &a);
    ( a > 99 && a < 999 ) ?  printf("%04lf\n",a) : printf("Entre com um Valor do Formato XXX.YYYY");

// D)
    printf(" Meus primerios\n Programas em  C");

// E)
    printf(" Meus primerios Programas em  C");

// F)
    int x,y ;
    float  z,resultado;
    printf("entre com 2 valores inteiros e um decimal.:\n");
    scanf(" %d %d %f", &x,&y,&z);
    resultado = x*y*z;
    printf("%f\n",resultado);

