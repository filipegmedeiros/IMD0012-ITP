/*
 *                             IMD0012 - T03
 *                       ------------------------- 
 *                      LISTA 06 - EXERCICIO 02
 *                 -------------------------------------
 *                  https://github.com/filipegmedeiros
 *             ---------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strn_cat(char *StringA, char *StringB, int n){

char *Result;
Result = malloc( ( sizeof(StringB) * n + sizeof(StringA) ) );

Result = strcpy(Result,StringA);

for(int i = 0 ; i < n; i++){
  Result = strcat(Result,StringB);

  }
  return Result;

}


int main(void) {
  char *A = "foo";

  char *B = "bar";

  int n = 6;

  printf("%s", strn_cat(A, B, n));

return 0;
}


