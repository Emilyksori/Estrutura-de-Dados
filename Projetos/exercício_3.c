/*Crie um programa para uma concessionária de veículos que permita
cadastrar e exibir informações de veículos. Cada veículo deve ter um
modelo, ano, preço e placa.
- Escreva um programa em C que:
• Permita criar registros dos carros livros seguindo os critérios acima
• Ao inicializar o programa, exibir uma mensagem de usuário de forma
que permita que os registros dos carro sejam realizados para cada
característica: modelo, ano, preço, placa.
• Ao final do cadastro, exiba em tela as informações dos carros
cadastrados.
*/

// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Veiculo {
    char modelo[50];
    int ano;
    float preco;
    char placa[10];
};

int main() {
    struct Veiculo *carros = NULL;
    int quantidade = 0;
    char continuar;

    printf("***---------------------------***\n");
    printf("Cadastro de Veículos - Concessionária\n");
    printf("***---------------------------***\n\n");

    do {
        // Realocar memória para um novo veículo
        carros = realloc(carros, (quantidade + 1) * sizeof(struct Veiculo));
        if (carros == NULL) {
            printf("Erro de alocação de memória!\n");
            return 1;
        }

        printf("\n--- Cadastro do Veículo %d ---\n", quantidade + 1);

        printf("Modelo: ");
        scanf(" %[^\n]", carros[quantidade].modelo);

        printf("Ano: ");
        scanf("%d", &carros[quantidade].ano);

        printf("Preço: R$ ");
        scanf("%f", &carros[quantidade].preco);

        printf("Placa: ");
        scanf(" %[^\n]", carros[quantidade].placa);

        quantidade++;

        printf("\nDeseja cadastrar outro veículo? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    // Exibição
    printf("\n\n***---------------------------***\n");
    printf("VEÍCULOS CADASTRADOS\n");
    printf("***---------------------------***\n");
    for (int i = 0; i < quantidade; i++) {
        printf("\nVeículo %d:\n", i + 1);
        printf("Modelo: %s\n", carros[i].modelo);
        printf("Ano: %d\n", carros[i].ano);
        printf("Preço: R$ %.2f\n", carros[i].preco);
        printf("Placa: %s\n", carros[i].placa);
    }

    // Liberar a memória
    free(carros);

    return 0;
}
