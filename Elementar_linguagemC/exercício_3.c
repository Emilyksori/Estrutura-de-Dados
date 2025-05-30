// Verificação de número par ou ímpar

# include <stdio.h>
# include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int n;

    printf("Digite um número: ");
    scanf ("%d", &n);

    if (n%2==0)
        printf("O Número: %.i é Par", n);
    else
        printf("O Número: %.i é Impar", n);

    return 0;

}