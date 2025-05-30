// Calcular e exibir o fatorial do exercício 1

#include <stdio.h>

long long int fatorial(int num) {
    if (num == 0 || num == 1) {
        return 1; 
    }
    long long int fat = 1;
    for (int i = 2; i <= num; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int n = 10; 
    int fib1 = 0, fib2 = 1, proximo;

    printf("Os primeiros %d termos da sequencia de Fibonacci e seus fatoriais:\n", n);

    printf("%d! = %lld\n", fib1, fatorial(fib1));
    printf("%d! = %lld\n", fib2, fatorial(fib2));

    for (int i = 2; i < n; i++) {
        proximo = fib1 + fib2;
        printf("%d! = %lld\n", proximo, fatorial(proximo));

        fib1 = fib2;
        fib2 = proximo;
    }

    return 0;
}
