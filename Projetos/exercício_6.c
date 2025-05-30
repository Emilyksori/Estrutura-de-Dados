// Bibliotecas
#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100

struct Aluno {
    char nome[100];
    int matricula;
    float nota;
};

void adicionarAluno(struct Aluno alunos[], int *totalAlunos, char nome[], int matricula, float nota) {
    if (*totalAlunos >= MAX_ALUNOS) {
        printf("\n\nLimite máximo de alunos atingido.\n");
        return;
    }

    strcpy(alunos[*totalAlunos].nome, nome);
    alunos[*totalAlunos].matricula = matricula;
    alunos[*totalAlunos].nota = nota;

    (*totalAlunos)++;
    printf("\n\nAluno adicionado com sucesso!\n");
}

void atualizarNota(struct Aluno alunos[], int totalAlunos, char nome[], float novaNota) {
    for (int i = 0; i < totalAlunos; i++) {
        if (strcmp(alunos[i].nome, nome) == 0) {
            alunos[i].nota = novaNota;
            printf("\n\nNota atualizada com sucesso!\n");
            return;
        }
    }
    printf("\n\nAluno não encontrado.\n");
}

void exibirAluno(struct Aluno alunos[], int totalAlunos, char nome[]) {
    for (int i = 0; i < totalAlunos; i++) {
        if (strcmp(alunos[i].nome, nome) == 0) {
            printf("\n\n***---------------------------***\n");
            printf("DADOS DO ALUNO\n");
            printf("***---------------------------***\n\n");
            printf("Nome do aluno: %s\n", alunos[i].nome);
            printf("Matrícula: %d\n", alunos[i].matricula);
            printf("Nota: %.2f\n", alunos[i].nota);
            return;
        }
    }
    printf("\n\nAluno não encontrado.\n");
}

int main() {
    struct Aluno alunos[MAX_ALUNOS];
    int totalAlunos = 0;
    int opcao;

    do {
        printf("\n***---------------------------***\n");
        printf("MENU DE OPÇÕES: \n");
        printf("***---------------------------***\n\n");
        printf("1. Adicionar novo aluno\n");
        printf("2. Atualizar nota de aluno\n");
        printf("3. Exibir informações de um aluno\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); 

        if (opcao == 1) {
            char nome[100];
            int matricula;
            float nota;

            printf("Nome do aluno: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0'; 

            printf("Matrícula: ");
            scanf("%d", &matricula);

            printf("Nota: ");
            scanf("%f", &nota);
            getchar();

            adicionarAluno(alunos, &totalAlunos, nome, matricula, nota);
        } else if (opcao == 2) {
            char nome[100];
            float novaNota;

            printf("Nome do aluno para atualizar nota: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            printf("Nova nota: ");
            scanf("%f", &novaNota);
            getchar();

            atualizarNota(alunos, totalAlunos, nome, novaNota);
        } else if (opcao == 3) {
            char nome[100];
            printf("Nome do aluno para exibir informações: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            exibirAluno(alunos, totalAlunos, nome);
        }
    } while (opcao != 0);

    return 0;
}
