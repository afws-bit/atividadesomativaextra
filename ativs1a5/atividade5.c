#include <stdio.h>
#include <stdlib.h>

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
    int quantidade;
    
    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &quantidade);
    
    // Alocação dinâmica de memória
    Produto *estoque = (Produto *)malloc(quantidade * sizeof(Produto));
    
    if (estoque == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }
    
    // Preenchendo o array usando ponteiros
    printf("\n=== CADASTRO DE PRODUTOS ===\n");
    for (int i = 0; i < quantidade; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &(estoque + i)->id);
        printf("Preço: R$ ");
        scanf("%f", &(estoque + i)->preco);
    }
    
    printf("\nPRODUTOS CADASTRADOS:");
    imprimir_produtos(estoque, quantidade);
    
    // Aplicando desconto
    float desconto;
    printf("\nDigite o percentual de desconto: ");
    scanf("%f", &desconto);
    
    for (int i = 0; i < quantidade; i++) {
        aplicar_desconto((estoque + i), desconto);
    }
    
    printf("\nAPÓS %.1f%% DE DESCONTO:", desconto);
    imprimir_produtos(estoque, quantidade);
    
    // Liberando memória alocada
    free(estoque);
    
    return 0;
}