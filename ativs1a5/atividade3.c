#include <stdio.h>

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float percentual) {
    produto->preco = produto->preco * (1 - percentual / 100);
}

int main() {
    Produto p1 = {1, 150.0};
    
    printf("Produto ID: %d\n", p1.id);
    printf("Preço original: R$ %.2f\n", p1.preco);
    
    aplicar_desconto(&p1, 20.0);
    
    printf("Preço após desconto: R$ %.2f\n", p1.preco);
    
    return 0;
}