/*Crie um programa para um biblioteca que permita registrar e exibir
informações de livros. Cada livro deve ter um título, autor, número de
páginas e código de cadastro
-Escreva um programa em C que:
• Permita criar registros dos livros seguindo os critérios acima
• Cadastre 5 livros alunos e exiba as informações dos livros cadastrados
em tela.
• Os registros podem ser gravados diretamente pelo código.
*/

// Biblioteca
#include <stdio.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int paginas;
    int codigo;
};

int main() {
    struct Livro livros[5] = {
        {"Dom Casmurro", "Machado de Assis", 256, 1001},
        {"O Pequeno Príncipe", "Antoine de Saint-Exupéry", 96, 1002},
        {"Capitães da Areia", "Jorge Amado", 288, 1003},
        {"A Revolução dos Bichos", "George Orwell", 152, 1004},
        {"1984", "George Orwell", 328, 1005}
    };

    printf("***---------------------------***\n");
    printf("Livros Cadastrados na biblioteca\n");
    printf("***---------------------------***\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Título: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Número de páginas: %d\n", livros[i].paginas);
        printf("Código de cadastro: %d\n\n", livros[i].codigo);
    }

    return 0;
}
