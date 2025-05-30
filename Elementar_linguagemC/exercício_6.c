// Implemente um programa para receber 1 vetor do tipo char com 3 elementos. Para cada vetor, crie um novo vetor contendo os valores correspondentes do vetor original em hexadecimal na posição 0 e decimal na posição 1

#include <stdio.h>
# include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char vetor[3]; 
    int valores[3][2]; 

    printf("Digite 3 caracteres:\n");
    for (int i = 0; i < 3; i++) {
        printf("Caractere %d: ", i + 1);
        scanf(" %c", &vetor[i]); 
    }

    for (int i = 0; i < 3; i++) {
        valores[i][0] = vetor[i]; 
        valores[i][1] = vetor[i]; 
    }

    printf("\nValores convertidos:\n");
    for (int i = 0; i < 3; i++) {
        printf("Caractere: '%c'  |  Hexadecimal: 0x%X  |  Decimal: %d\n", vetor[i], valores[i][1], valores[i][0]);
    }

    return 0;
}
