// Conversão de pesos - Quilo para libras

# include <stdio.h>
# include <locale.h>
# define CONVERSAO 2.20462 // 1 kg = 2.20462 libras

int main () {

    setlocale(LC_ALL, "Portuguese");

    float kg, lb;

    printf("Digite o peso em quilogramas: ");
    scanf("%f", &kg);

    lb = kg * CONVERSAO;

    printf("O peso em quilogramas é: %.2f, O peso em Libras é: %.2f", kg, lb);

    return 0;
}