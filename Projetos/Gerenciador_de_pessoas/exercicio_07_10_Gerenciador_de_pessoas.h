#ifndef GERENCIADOR_DE_PESSOAS_H
#define GERENCIADOR_DE_PESSOAS_H

typedef struct Pessoa {
    char nome[50];
    struct Pessoa *prox;
} Pessoa;

typedef struct {
    Pessoa *cabeca;
} Lista;

// Exercício 7
void initLista(Lista *l);

// Exercício 8
void inserirNome(Lista *l, const char *nome);
void exibirLista(Lista *l);

// Exercício 9
int removerNome(Lista *l, const char *nome);

#endif
