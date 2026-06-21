Markdown# 💻 Ponteiros, Structs e Alocação Dinâmica em C

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
Conceitos: Passagem por referência e alteração direta de escopos via memória.🔹 Atividade 3 — Ponteiros para StructsIntrodução a estruturas de dados compostas. Criação da estrutura Produto e adaptação da função de desconto utilizando o operador seta (->).Ctypedef struct {
    int id;
    float preco;
} Produto;
Conceitos: Structs, Ponteiros para structs e Operador ->.🔹 Atividade 4 — Aritmética de PonteirosCriação de um estoque baseado em um vetor de estruturas. A exibição e a navegação pelos produtos foram feitas estritamente via aritmética de ponteiros.C(ptr + i)->id;
(ptr + i)->preco;
Conceitos: Arrays e navegação linear em blocos de memória.🔹 Atividade 5 — Alocação Dinâmica de MemóriaEvolução final do sistema: substituição do vetor estático por um vetor dinâmico dimensionado em tempo de execução de acordo com a procura do utilizador.Funções Utilizadas: malloc() para reserva no Heap e free() para prevenção de memory leaks.Conceitos: Alocação dinâmica e Gerenciamento manual de memória.🛠️ Tecnologias e FerramentasFerramentaUtilidadeLinguagem CCore do desenvolvimento e manipulação de baixo nível.GCCCompilador utilizado para gerar os binários executáveis.Git & GitHubControlo de versão e alojamento do código.⚙️ Como Compilar e ExecutarCertifica-te de que tens o compilador gcc instalado na tua máquina. No terminal, executa os comandos abaixo:1. CompilaçãoBashgcc main.c -o programa
2. ExecuçãoLinux / macOS:Bash./programa
Windows:Bashprograma.exe
🎓 Objetivos de Aprendizagem Consolidados💡 Retrospetiva Técnica: A execução desta trilha solidificou o entendimento sobre como o computador organiza dados em memória.[x] Compreensão prática de ponteiros e endereços.[x] Domínio de passagem de parâmetros por referência.[x] Manipulação avançada de structs e arrays.[x] Controlo total do ciclo de vida da memória (Stack vs Heap).📝 Considerações FinaisA realização destas atividades permitiu compreender de forma prática como a linguagem C manipula endereços de memória, além de reforçar conceitos essenciais para o desenvolvimento de estruturas de dados eficientes e aplicações com gestão otimizada de recursos.Desenvolvido com 💙 por Letícia Gomes da Silva.
