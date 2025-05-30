// Escreva um programa que utilize ponteiros para inverter os elementos de um vetor de inteiros.

#include <stdio.h>

#define TAMANHO 10  

int main() {
    int vetor[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int vetorInvertido[TAMANHO]; 
    int *ptrOrigem = vetor; 
    int *ptrDestino = vetorInvertido + (TAMANHO - 1); 

    for (int i = 0; i < TAMANHO; i++) {
        *ptrDestino = *ptrOrigem; 
        ptrOrigem++;   
        ptrDestino--;  
    }

    printf("Vetor original: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nVetor invertido: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetorInvertido[i]);
    }

    return 0;
}
