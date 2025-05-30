// Implemente um programa para que o usuário entre com a quantidade de elementos de um vetor e exiba seus elementos e endereços de memória

#include <stdio.h>
#include <stdlib.h>
# include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores e seus endereços de memória:\n");
    for (int i = 0; i < n; i++) {
        printf("vetor[%d] = %d \tEndereco: %p\n", i, vetor[i], (void *)&vetor[i]);
    }

    free(vetor);

    return 0;
}
