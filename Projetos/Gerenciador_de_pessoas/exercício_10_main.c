#include <stdio.h>
#include <string.h>
#include "exercicio_07_10_Gerenciador_de_pessoas.h"

int main() {
    Lista lista;
    initLista(&lista);

    int opcao;
    char nome[50];

    do {
        printf("\n--- Menu ---\n");
        printf("1 - Inserir nome\n");
        printf("2 - Remover nome\n");
        printf("3 - Exibir lista\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o nome a inserir: ");
                scanf(" %[^\n]", nome);
                inserirNome(&lista, nome);
                break;

            case 2:
                printf("Digite o nome a remover: ");
                scanf(" %[^\n]", nome);
                if (removerNome(&lista, nome)) {
                    printf("'%s' removido com sucesso.\n", nome);
                } else {
                    printf("Nome '%s' não encontrado.\n", nome);
                }
                break;

            case 3:
                printf("Lista de nomes:\n");
                exibirLista(&lista);
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
