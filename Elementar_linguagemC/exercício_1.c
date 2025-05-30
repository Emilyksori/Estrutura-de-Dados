// Calcular e exibir os 10 primeiros valores de uma sequencia de Fibonnaci

#include <stdio.h>

int main() {
    int n = 10;
    int fib1 = 0, fib2 = 1, prox;

    printf("Os primeiros %d termos da sequência de Fibonacci são:\n", n);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", fib1);
        } else if (i == 1) {
            printf(", %d", fib2);
        } else {
            prox = fib1 + fib2;
            printf(", %d", prox);
            fib1 = fib2;
            fib2 = prox;
        }
    }

    printf(".\n");

    return 0;
}
