#include <stdio.h>
#include <stdlib.h> 
typedef struct s{
    int campo1;

};
int main(){
    struct s *vetor1=NULL, *vetor2=NULL;
    int quit = 0, count = 0, val;

    while(!quit){
        printf("Terminar? 1/0 ");
        scanf("%d", &quit);

        if(!quit){
            scanf("%d", &val);

                count ++;
            vetor2 = (struct s*) malloc(sizeof(struct s)*count);
            int i;
            for(i = 0;i<count; i++)
                vetor2[i].campo1 = vetor1[i].campo1;
            vetor2[i-1].campo1 = val;
            vetor1 = vetor2;
        }
    }
}
