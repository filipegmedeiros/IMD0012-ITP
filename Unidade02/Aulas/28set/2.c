#include <stdbool.h>
#include <stdlib.h>

typedef struct node {
    int dados;
    struct node *proximo;
} Node;

typedef struct {
    Node *topo_da_pilha;
} Pilha;

void novo_elemento_na_pilha(Pilha *pilha, int dados) {
    Node* novo  = malloc(sizeof(Node));
    novo  -> dados = dados;
    novo  -> proximo = pilha -> topo_da_pilha;
    pilha -> topo_da_pilha = novo ;
}

int pilha_pop(Pilha *pilha) {
    Node* buf = pilha -> topo_da_pilha;
    pilha -> topo_da_pilha = pilha -> topo_da_pilha -> proximo;
    int dados = buf -> dados;
    free(buf);
    return dados;
}

int pilha_peek(const Pilha *pilha) {
    return pilha -> topo_da_pilha -> dados;
}

bool pilha_is_empty(const Pilha *pilha) {
    return (pilha -> topo_da_pilha == NULL);
}
