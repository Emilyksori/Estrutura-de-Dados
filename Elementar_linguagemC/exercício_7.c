// Implemente um programa para declarar um ponteiro e uma variável do tipo inteiro com seu valor correspondente. Imprima em tela a posição de memória do ponteiro, o valor da variável e o endereço de memória da variável.

#include <stdio.h>

int main() {
    int var = 10;  
    int *ptr;      
    ptr = &var;     

    printf("Endereço de memória do ponteiro: %p\n", (void*)&ptr);
    printf("Endereço de memória da variável: %p\n", (void*)&var);
    printf("Valor da variável: %d\n", var);

    return 0;
}
