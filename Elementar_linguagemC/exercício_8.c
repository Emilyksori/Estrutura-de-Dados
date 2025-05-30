// Escreva um programa que utilize um ponteiro para contar quantas vezes um determinado valor aparece em um vetor de inteiros.

#include <stdio.h>

int contarOcorrencias(int *vetor, int tamanho, int valor) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (*(vetor + i) == valor) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 2, 5, 2, 6};
    int valor, resultado;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Digite o valor a ser procurado: ");
    scanf("%d", &valor);

    resultado = contarOcorrencias(vetor, tamanho, valor);

    printf("O valor %d apareceu %d vezes no vetor.\n", valor, resultado);

    return 0;
}
