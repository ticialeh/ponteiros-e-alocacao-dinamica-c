# 💻 Ponteiros, Structs e Alocação Dinâmica em C

![C](https://img.shields.io/badge/Language-C-blue.svg)
![GCC](https://img.shields.io/badge/Compiler-GCC-orange.svg)
![Git](https://img.shields.io/badge/VCS-Git-red.svg)

🔬 **Disciplina:** Programação Imperativa e Funcional (PIF)  
👩‍💻 **Autora:** Letícia Gomes da Silva  

---

## 📌 Sobre o Projeto

Este repositório contém a resolução de uma sequência de exercícios práticos desenvolvidos com o objetivo de dominar os conceitos fundamentais da linguagem C relacionados à **manipulação direta de memória**. 

Durante o desenvolvimento, foram abordados tópicos cruciais como ponteiros, passagem por referência, estruturas de dados, aritmética de ponteiros e o gerenciamento de memória no *Heap*.

---

## 🚀 Conteúdo Desenvolvido & Evolução do Código

A sequência de atividades foi estruturada de forma incremental, simulando a evolução de um sistema real de gerenciamento de produtos.

### 🔹 Atividade 1 — Fundamentos de Ponteiros
Implementação inicial utilizando um ponteiro para modificar diretamente o valor de uma variável do tipo `float` (preço de um produto).
* **Conceitos:** Endereçamento de memória, Ponteiros e Operador de indireção (`*`).

### 🔹 Atividade 2 — Passagem por Referência
Refatoração da lógica de alteração de preço, isolando-a em uma função especializada.
```c
void aplicar_desconto(float *preco, float desconto);
