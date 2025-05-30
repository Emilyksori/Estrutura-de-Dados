#include <stdlib.h>
#include <string.h>
#include "exercicio_07_10_Gerenciador_de_pessoas.h"

int removerNome(Lista *l, const char *nome) {
    Pessoa *atual = l->cabeca;
    Pessoa *anterior = NULL;

    while (atual != NULL && strcmp(atual->nome, nome) != 0) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) return 0;

    if (anterior == NULL) {
        l->cabeca = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    free(atual);
    return 1;
}
