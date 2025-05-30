/*Crie um programa que permita cadastrar e exibir informações de alunos
em um curso. Cada registro deve ter um nome, idade, nota e curso
matriculado. Os registros podem ser gravados diretamente pelo código,
sem necessidade de gravar como entrada de usuário.
- Escreva um programa em C que:
• Permita criar registros de alunos seguindo os critérios acima
• Cadastre 10 alunos e exiba as informações dos alunos cadastrados em
tela.
• Os registros podem ser gravados diretamente pelo código.
*/

//Biblioteca
#include <stdio.h>

// Estrutura do aluno
struct Aluno {
    char nome[50];
    int idade;
    float nota;
    char curso[50];
};

int main() {

    struct Aluno alunos[10] = {
        {"Alice Macedo", 20, 8.5, "Psicologia"},
        {"Bruno Oliveira", 22, 7.8, "Direito"},
        {"Caio Mena", 19, 9.0, "Medicina"},
        {"Davi Souza", 21, 6.5, "Arquitetura"},
        {"Emanuel Ronaldo", 23, 8.0, "Administração"},
        {"Felipe Brito", 20, 7.2, "Computação"},
        {"Giovanna Mendina", 18, 9.3, "Computação"},
        {"Helena Martins", 22, 8.1, "Biologia"},
        {"Higor Ferreira", 21, 6.9, "Física"},
        {"Julia Teixeira", 19, 9.5, "Matemática"}
    };

    printf("***---------------------------***\n");
    printf("Lista de Alunos Cadastrados\n");
    printf("***---------------------------***\n\n");
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
        printf("Curso: %s\n\n", alunos[i].curso);
    }

    return 0;
}
