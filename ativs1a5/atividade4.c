#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float percentual) {
    produto->preco = produto->preco * (1 - percentual / 100);
}

void imprimir_produtos(Produto *ptr, int quantidade) {
    printf("\n=== LISTA DE PRODUTOS ===\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Produto ID: %d | Preço: R$ %.2f\n", 
               (ptr + i)->id, (ptr + i)->preco);
    }
}

int main() {
    Produto estoque[3] = {
        {101, 50.0},
        {102, 75.5},
        {103, 120.0}
    };
    
    printf("ESTOQUE ORIGINAL:");
    imprimir_produtos(estoque, 3);
    
    for (int i = 0; i < 3; i++) {
        aplicar_desconto(&estoque[i], 10.0);
    }
    
    printf("\nESTOQUE APÓS 10%% DE DESCONTO:");
    imprimir_produtos(estoque, 3);
    
    return 0;
}