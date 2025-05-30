#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exercicio_07_10_Gerenciador_de_pessoas.h"

void inserirNome(Lista *l, const char *nome) {
    Pessoa *nova = (Pessoa *)malloc(sizeof(Pessoa));
    if (nova == NULL) return;

    strcpy(nova->nome, nome);
    nova->prox = l->cabeca;
    l->cabeca = nova;
}

void exibirLista(Lista *l) {
    Pessoa *atual = l->cabeca;
    while (atual != NULL) {
        printf("Nome: %s\n", atual->nome);
        atual = atual->prox;
    }
}
