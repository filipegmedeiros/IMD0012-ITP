
#include <stdio.h>

int main(void){
    int i = 0;
    int j = 0;
    int vetor[20];

    for(i = 0; i < 20; i++) {

      printf("Digite um num ");
      scanf(" %d", &vetor[i]);
   }

    for(j = 0; j < 20; j++){
        if ( vetor[j] % 5 == 0 ){
            printf("%d ",vetor[j]);  
        }
    }


  return 0;
}
