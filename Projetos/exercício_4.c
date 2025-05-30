// bibliotecas
#include <stdio.h>
#include <string.h>

struct ContaBancaria {
    int numero;
    float saldo;
    char titular[100];
};

struct ContaBancaria criarConta(int numero, char titular[], float saldoInicial) {
    struct ContaBancaria conta;
    conta.numero = numero;
    conta.saldo = saldoInicial;
    strcpy(conta.titular, titular);
    return conta;
}

void depositar(struct ContaBancaria *conta, float valor) {
    if (valor > 0) {
        conta->saldo += valor;
        printf("Depósito de R$ %.2f realizado com sucesso.\n", valor);
    } else {
        printf("Valor inválido para depósito.\n");
    }
}

void sacar(struct ContaBancaria *conta, float valor) {
    if (valor > 0 && valor <= conta->saldo) {
        conta->saldo -= valor;
        printf("Saque de R$ %.2f realizado com sucesso.\n", valor);
    } else {
        printf("Saque inválido. Saldo insuficiente ou valor negativo.\n");
    }
}

void exibirConta(struct ContaBancaria conta) {
    printf("\n\n***---------------------------***");
    printf("\nINFORMAÇÕES DA CONTA\n");
    printf("***---------------------------***\n\n");
    printf("Titular: %s\n", conta.titular);
    printf("Número da conta: %d\n", conta.numero);
    printf("Saldo: R$ %.2f\n", conta.saldo);
}

int main() {
    int numeroConta;
    char nomeTitular[100];
    float saldoInicial, valorDeposito, valorSaque;

    printf("***---------------------------***\n");
    printf("ABERTURA DE CONTA BANCÁRIA\n");
    printf("***---------------------------***\n\n");

    printf("Informe o número da conta: ");
    scanf("%d", &numeroConta);

    printf("Informe o nome do titular: ");
    scanf(" %[^\n]", nomeTitular);

    printf("Informe o saldo inicial: R$ ");
    scanf("%f", &saldoInicial);

    struct ContaBancaria minhaConta = criarConta(numeroConta, nomeTitular, saldoInicial);

    printf("\nInforme o valor para depósito: R$ ");
    scanf("%f", &valorDeposito);
    depositar(&minhaConta, valorDeposito);

    printf("\nInforme o valor para saque: R$ ");
    scanf("%f", &valorSaque);
    sacar(&minhaConta, valorSaque);

    exibirConta(minhaConta);

    return 0;
}

