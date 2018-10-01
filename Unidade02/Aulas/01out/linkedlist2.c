#include <stdio.h>
#include <stdlib.h>


typedef struct node {
  int data;
  struct node *next;
} Node;

typedef struct list {
    Node* data_list;
    int size ;
}List;


Node* criar_link(int val){
    Node* criar_novolink = malloc(sizeof(Node));
    criar_novolink -> data = val;
    return criar_novolink;

}


int main(){
    int tamanho;
    List datalist; 

    printf("Os valores são: \n");
    for( int i = 1 ; i < datalist.size ; i++){
        Node* val = criar_link(rand() % 10 );        
        printf("%d) %d\n",i, val -> data);
    
    
        if ( i == 1 ){
            datalist -> data_list = val;
        }else if ( i == (tamanho -> size) -1 ){
            n é o primeiro  -> n é o rimeor  = val;
            n é o primeiro ->  = next;
        
        }
    
    }

}
