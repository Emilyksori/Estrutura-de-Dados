// Escreva um programa que utilize um ponteiro para percorrer um vetor de inteiros e calcular a soma de seus elementos.

#include <stdio.h>

int calcularSoma(int *vetor, int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += *(vetor + i);  
        
    }
    return soma;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};  
    
    int soma;
    int tam = sizeof(vetor) / sizeof(vetor[0]);

    soma = calcularSoma(vetor, tam); 

    printf("A soma dos elementos do vetor é: %d\n", soma);

    return 0;
}
