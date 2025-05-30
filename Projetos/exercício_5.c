// Bibliotecas
#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[100];
    int codigo;
    int quantidade;
    float preco;
};

void atualizarEstoque(struct Produto *produto, int quantidadeAdicional) {
    if (quantidadeAdicional > 0) {
        produto->quantidade += quantidadeAdicional;
        printf("\nEstoque atualizado com sucesso!\n\n");
    } else {
        printf("Quantidade inválida.\n");
    }
}

void exibirProduto(struct Produto produto) {
    printf("***---------------------------***\n");
    printf("INFORMAÇÕES DO PRODUTO\n");
    printf("***---------------------------***\n\n");

    printf("Nome do Produto: %s\n", produto.nome);
    printf("Código: %d\n", produto.codigo);
    printf("Quantidade Disponível: %d\n", produto.quantidade);
    printf("Preço: R$ %.2f\n", produto.preco);
}

int main() {
    struct Produto produto;
    printf("***---------------------------***\n");
    printf("CADASTRO DE PRODUTO NO ESTOQUE\n");
    printf("***---------------------------***\n\n");

    printf("Nome do Produto: ");
    scanf(" %[^\n]", produto.nome);

    printf("Código do Produto: ");
    scanf("%d", &produto.codigo);

    printf("Quantidade Inicial: ");
    scanf("%d", &produto.quantidade);

    printf("Preço: R$ ");
    scanf("%f", &produto.preco);

    int quantidadeAdicional;
    printf("\nInforme a quantidade a ser adicionada ao estoque: ");
    scanf("%d", &quantidadeAdicional);

    atualizarEstoque(&produto, quantidadeAdicional);

    exibirProduto(produto);

    return 0;
}
