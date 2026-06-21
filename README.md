# Ponteiros, Structs e Alocação Dinâmica em C

> Atividade desenvolvida para a disciplina **PIF – Programação Imperativa e Funcional**

## Autora

**Letícia Gomes da Silva**

---

## Sobre o Projeto

Este projeto reúne a resolução de uma sequência de exercícios desenvolvidos em linguagem C com foco na manipulação de memória e estruturas de dados.

As atividades foram construídas de forma progressiva, permitindo a compreensão prática de conceitos fundamentais da programação, como ponteiros, passagem por referência, estruturas (`struct`), aritmética de ponteiros e alocação dinâmica de memória.

---

## Objetivos de Aprendizagem

Ao longo da atividade foram explorados os seguintes conceitos:

* Manipulação de ponteiros
* Endereçamento de memória
* Passagem por referência
* Estruturas de dados com `struct`
* Ponteiros para estruturas
* Aritmética de ponteiros
* Vetores de estruturas
* Alocação dinâmica de memória
* Gerenciamento de memória com `malloc()` e `free()`

---

# Desenvolvimento das Atividades

## Atividade 1 — Fundamentos de Ponteiros e Modificação Direta

### Proposta

Criar uma variável do tipo `float` representando o preço de um produto e utilizar um ponteiro para modificar diretamente seu valor na memória.

### Implementação

Foi criada uma variável contendo o preço inicial do produto e um ponteiro apontando para seu endereço de memória.

Através da desreferenciação do ponteiro, foi aplicado um aumento de 10% sobre o valor armazenado.

### Conceitos Utilizados

* Operador de endereço (`&`)
* Operador de desreferenciação (`*`)
* Modificação direta de valores através de ponteiros

---

## Atividade 2 — Passagem por Referência

### Proposta

Encapsular a lógica de alteração do preço dentro de uma função.

### Implementação

Foi criada a função:

```c
void aplicar_desconto(float *preco, float desconto);
```

A função recebe o endereço da variável e realiza a alteração diretamente na memória, sem necessidade de retornar valores.

### Conceitos Utilizados

* Funções com ponteiros
* Passagem por referência
* Alteração de dados através de parâmetros

---

## Atividade 3 — Ponteiros para Structs

### Proposta

Representar um produto utilizando uma estrutura.

### Implementação

Foi criada a estrutura:

```c
typedef struct {
    int id;
    float preco;
} Produto;
```

A função de desconto foi adaptada para receber um ponteiro para uma estrutura `Produto`.

O acesso ao campo de preço foi realizado utilizando o operador seta:

```c
produto->preco
```

### Conceitos Utilizados

* Structs
* Ponteiros para estruturas
* Operador `->`

---

## Atividade 4 — Aritmética de Ponteiros em Arrays

### Proposta

Gerenciar múltiplos produtos armazenados em um vetor.

### Implementação

Foi criado um array contendo três produtos.

Também foi implementada a função:

```c
void imprimir_produtos(Produto *ptr, int quantidade);
```

O percurso do vetor é realizado exclusivamente utilizando aritmética de ponteiros:

```c
(ptr + i)->id
(ptr + i)->preco
```

Sem utilizar a sintaxe tradicional:

```c
ptr[i]
```

### Conceitos Utilizados

* Vetores de estruturas
* Aritmética de ponteiros
* Percurso de arrays através de endereços de memória

---

## Atividade 5 — Alocação Dinâmica de Memória

### Proposta

Permitir que o usuário defina a quantidade de produtos cadastrados durante a execução do programa.

### Implementação

O programa solicita ao usuário a quantidade de produtos desejada e utiliza alocação dinâmica para criar o vetor de estruturas.

Exemplo de alocação:

```c
Produto *produtos = malloc(quantidade * sizeof(Produto));
```

Após o preenchimento e exibição dos dados, a memória utilizada é liberada:

```c
free(produtos);
```

### Conceitos Utilizados

* Alocação dinâmica
* Heap
* `malloc()`
* `free()`
* Gerenciamento eficiente de memória

---

## Compilação

Utilizando GCC:

```bash
gcc main.c -o programa
```

---

## Execução

Linux/macOS:

```bash
./programa
```

Windows:

```bash
programa.exe
```

---

## Conclusão

A realização desta atividade permitiu compreender como a linguagem C trabalha diretamente com memória, possibilitando um maior controle sobre os dados armazenados e manipulados pelo programa.

Além disso, os exercícios reforçaram conceitos essenciais para disciplinas posteriores relacionadas a estruturas de dados, sistemas e desenvolvimento de software de baixo nível.

---

### Disciplina

**PIF – Programação Imperativa e Funcional**

### Autora

**Letícia Gomes da Silva**
