# Projetos de Estrutura de dados

### Exercício 1:
Crie um programa que permita cadastrar e exibir informações de alunos
em um curso. Cada registro deve ter um nome, idade, nota e curso
matriculado. Os registros podem ser gravados diretamente pelo código,
sem necessidade de gravar como entrada de usuário.

    • Escreva um programa em C que:
        • Permita criar registros de alunos seguindo os critérios acima
        • Cadastre 10 alunos e exiba as informações dos alunos cadastrados em tela.
        • Os registros podem ser gravados diretamente pelo código.

---        

### Exercício 2:
Crie um programa para um biblioteca que permita registrar e exibir
informações de livros. Cada livro deve ter um título, autor, número de
páginas e código de cadastro

    • Escreva um programa em C que:
        • Permita criar registros dos livros seguindo os critérios acima
        • Cadastre 5 livros alunos e exiba as informações dos livros cadastrados em tela.
        • Os registros podem ser gravados  diretamente pelo código.

---

### Exercício 3:
Crie um programa para uma concessionária de veículos que permita
cadastrar e exibir informações de veículos. Cada veículo deve ter um
modelo, ano, preço e placa.

    • Escreva um programa em C que:
        • Permita criar registros dos carros livros seguindo os critérios acima
        • Ao inicializar o programa, exibir uma mensagem de usuário de forma que permita que os registros dos carro sejam realizados para cada característica: modelo, ano, preço, placa.
        • Ao final do cadastro, exiba em tela as informações dos carros cadastrados.

---

### Exercício 4:
Crie um programa que implemente um tipo abstrato de dados para gerenciar contas bancárias. O programa deve permitir criar uma
conta, depositar, sacar e exibir o saldo.

    • Escreva um programa em C que:
        • Utilize uma struct parametrizando a conta bancária contendo as informações de: numero da conta, saldo e nome do titular da conta.
        • Uma função capaz de criar e registrar uma conta bancária passando como parâmetros as informações de abertura da conta: conta, titular e saldo.
            • Na função principal os dados da conta, titular e saldo deve ser passados como entradas da função
        • Uma função capaz de depositar um valor na conta bancária e incrementar ao valor já existente na conta do usuário. A função deve receber como parâmetro a conta definida na struct e, como entrada de usuário, o valor correspondente ao depósito.
            • Na função o valor do depósito e a conta bancária deve ser passados como entradas da função
        • Uma função capaz de sacar um valor na conta bancária e decrementar ao valor já existente na conta do usuário. A função deve receber como parâmetro a conta definida na struct e, como entrada de usuário, o valor correspondente ao saque.
            • Na função o valor do saque e a conta bancária deve ser passados como entradas da função
        • Uma função capaz de exibir o saldo de uma conta bancária. A função deve receber a conta bancária como entrada e exibir as informações definidas na struct.
            • Na função principal as informações deve estar estruturadas para exibir as informações da seguinte forma
                • Titular:
                • Número da conta:
                • Saldo

---

### Exercício 5:
Crie um programa que implemente um tipo abstrato de dados para gerenciar produtos em um
estoque. O programa deve permitir adicionar produtos, atualizar a quantidade em estoque e
exibir as informações dos produtos.

    • Escreva um programa em C que:
        • Utilize uma struct parametrizando os dados do produto contendo as informações de: nome do produto, código de estoque, quantidade disponível, preço.
        • Uma função capaz de atualizar a quantidade em estoque de um produto.
            • Na função principal a quantidade do produto atualizada deve incrementar do estoque disponível. O valor de quantidade deve ser passado como entrada de usuário.
        • Uma função capaz de exibir as informações de um produto cadastrado. A função deve receber o nome do produto cadastrado e exibir as informações definidas na struct.
            • Na função principal as informações deve estar estruturadas para exibir as informações da seguinte forma
                • Nome do Produto:
                • Código:
                • Quantidade Disponível:
                • Preço:

---

### Exercício 6:
Complemente o exercício 1 de forma a permitir que seja possível adicionar novos alunos e alterar as notas
correspondentes dos alunos que já estão matriculados
    
    • Escreva um programa em C que:
        • Utilize uma struct parametrizando os dados de aluno, conforme exercício 01
        • Uma função capaz de adicionar um novo aluno, passando como parâmetros o seu nome, código de matrícula e nota.
            • Na função principal os parâmetros da função devem ser passados como entradas de usuário
        • Uma função capaz de atualizar a nota de um aluno. A função deve receber o nome do aluno e a nova nota que será cadastrada.
            • Na função principal os parâmetros da função devem ser passados como entradas de usuário
        • Uma função capaz de exibir as informações relacionadas a um determinado aluno
            • A função deve receber como parâmetro o nome do aluno que será pesquisado
            • As informações deve estar estruturadas para exibir as informações da seguinte forma
                • Nome do aluno:
                • Matrícula:
                • Nota:

---

### Gerenciador de Pessoas
## Exercícios 7:
Crie um programa que implemente uma lista encadeada para armazenar nomes de pessoas.
    
    • Escreva um programa em C que:    
        a) Utilize uma struct parametrizando o nome do aluno e o ponteiro autorreferenciado para o próximo elemento da lista de alunos;
        
        b) (!!Sugestão!!) – Crie uma segunda struct contendo um ponteiro que inicialize e sirva como uma referência para o primeiro elemento da lista (cabeça). O elemento inicializador deve ser do mesmo tipo da struct criada no tópico “a”. Por exemplo:
            • Struct parametrizando o ponteiro e sua autorreferencia (tópico “a”)
            typedef struct Pessoa {
            char nome[50];
            struct Pessoa *prox;
            } Pessoa;
            
            • Struct com um ponteiro que inicialize e seja usario como cabeça (tópico “b)
            typedef struct {
            Pessoa *cabeca;
            } Lista;
            //inicializando a lista (cabeça) com um elemento null
            void initlista (Lista *l) {
            l->cabeca = NULL;
            }

## Exercícios 8:
Para o exercício 7, complemente com uma função capaz de adicionar um
novo nome à lista e exibir a lista

    • Escreva um programa em C que:
        • Utilize a estrutura definida no exercício 7 para inserir um novo nome na à lista
            • A função deve receber como parâmetros a lista de pessoas e o novo nome a ser acrescido
        • Utilize a estrutura definida no exercício 7 para exibir os nomes inseridos à lista
            • A função deve receber como parâmetros a lista de pessoas e exibir o seu respectivo conteúdo

## Exercícios 9:
Para o exercício 7 e 8, complemente com uma função capaz de remover
um nome da lista

    • Escreva um programa em C que:
        • Utilize a estrutura definida no exercício 7 e 8 para remover um nome da lista
            • A função deve receber como parâmetros a lista de pessoas e o novo nome a ser removido
            • Dentro da função considere uma estrutura para passar por todos os elementos da lista e verificar se o nome a ser removido consta na lista e caso positivo, remover o elemento correspondente da lista

## Exercícios 10:
Para o exercício 7, 8 e 9, desenvolva um complemento ao programa que
permita, exibir a lista que foi desenvolvida.

    • Escreva um programa em C que:
        • Na função principal cadastre 4 nomes utilizando a função do exercício 8
        • Realize a impressão em tela da lista que foi criada usando a função do exercício 8
        • Na função principal remova 2 nomes utilizando a função do exercício 9
        • Realize a impressão em tela da lista atualizada, conforme a função do exercício 8