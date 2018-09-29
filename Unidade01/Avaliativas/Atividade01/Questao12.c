/*
*                             IMD0012 - T03
*                       ------------------------- 
*                      LISTA 01 - EXERCICIO 12
*                 -------------------------------------
*                  https://github.com/filipegmedeiros
*             ---------------------------------------------
*/
#include <stdio.h>
#include <math.h>

void switch_opA(void){
    float a, b;
    char resp;

    printf("Escolha a operação  aritimética d,m,a,i: \n");
    scanf(" %c",&resp);

    printf("Escolha dois numeros: \n");
    scanf(" %f %f", &a, &b);

    switch(resp){
        float result;
      
      case 'a': // Adição
         result = a + b;
         printf("o resultado da soma de %0.1f mais %0.1f é: %0.1f\n", a, b, result);
         break;
         
		  case 's': // Subtração
         result = a - b;
         printf("o resultado da subtração de %0.1f menos %0.1f é: %0.1f\n", a, b, result);
         break;
         
       case 'd': // Divisão
         result = a / b;
         printf("o resultado da divisão de %0.1f por %0.1f é: %0.1f\n", a, b, result);
          break;
          
      case 'm': // Multiplicação
         result = a * b;
         printf("o resultado da multiplicação de %0.1f vezes %0.1f é: %0.1f\n", a, b, result);
         break;
         
       default:
        printf("Opção Inválida\n");
         break;
    }
}

void switch_opL(void){
     int a, b;
     char resp;

    printf("Escolha a operação  lógica a,x,o,n: \n");
    scanf(" %c",&resp);
    printf("Escolha dois numeros: \n");
    scanf(" %d %d", &a, &b);

    switch(resp){
        int result;
       
        case 'a': // a = a && b
            result = a & b;
			printf("A: %0.1d && B: %0.1d é: %0.1d\n", a, b, result);
			break;
			
		case 'x': // x = A xor B
        result = a ^ b ;
        printf("A: %0.1d ^ B: %0.1d é: %0.1d\n", a, b, result);
        break;
        
		case 'o': // o = A || B
        result = a | b;
        printf("A: %0.1d || B: %0.1d é: %0.1d\n", a, b, result);
        break;
        
		case 'n': // n = A nand B
       result = ~(a & b) || (~a | ~b);
       printf("A: %0.1d ~(a & b) || (~a | ~b) B: %0.1d é: %0.1d\n", a, b, result);
       break;
       
     default:
       printf("Opção Inválida\n");
       break;
    }
}

int main(void){
    char op;

    printf ("Escolha a ou l\n");
    scanf(" %c", &op);

    switch(op){
        case 'a':
           switch_opA();
           break;
        case 'l': 
           switch_opL();
           break;
        default:
           printf("Opção Inválida\n");
    }
    return 0;
}
