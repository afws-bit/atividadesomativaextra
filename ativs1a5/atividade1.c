#include <stdio.h>

int main() {
    float preco;
    float *ptr = &preco;
    
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);
    
    printf("Preço original: R$ %.2f\n", preco);
    
    *ptr = *ptr * 1.10;
    
    printf("Preço após aumento de 10%%: R$ %.2f\n", preco);
    
    return 0;
}