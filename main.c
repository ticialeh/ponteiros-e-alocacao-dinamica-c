#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    float valor;
} Item;

void darDesconto(Item *item, float desconto) {
    item->valor -= item->valor * (desconto / 100.0);
}

void mostrarItens(Item *p, int qtd) {

    printf("\n--- Itens cadastrados ---\n");

    for (int i = 0; i < qtd; i++) {
        printf("ID: %d\n", (p + i)->id);
        printf("Valor: R$ %.2f\n\n", (p + i)->valor);
    }
}

int main() {

    // Atividade 1
    float valor = 100.0;
    float *ponteiroValor = &valor;

    *ponteiroValor = *ponteiroValor * 1.10;

    printf("Valor depois do aumento: R$ %.2f\n\n", valor);

    // Atividade 2 e 3
    Item itemTeste = {1, 100.0};

    darDesconto(&itemTeste, 10);

    printf("ID: %d\n", itemTeste.id);
    printf("Valor com desconto: R$ %.2f\n\n", itemTeste.valor);

    // Atividade 5
    int qtd;

    printf("Quantos itens deseja cadastrar? ");
    scanf("%d", &qtd);

    Item *lista = malloc(qtd * sizeof(Item));

    if (lista == NULL) {
        printf("Erro ao reservar memoria.\n");
        return 1;
    }

    for (int i = 0; i < qtd; i++) {

        printf("\nItem %d\n", i + 1);

        printf("Digite o ID: ");
        scanf("%d", &(lista + i)->id);

        printf("Digite o valor: ");
        scanf("%f", &(lista + i)->valor);
    }

    if (qtd > 0) {
        darDesconto(lista, 10);
    }

    mostrarItens(lista, qtd);

    free(lista);

    return 0;
}