# Exercícios de Ponteiros em C

Este repositório contém a resolução de 5 atividades sobre ponteiros em linguagem C, demonstrando a evolução do conceito desde o básico até alocação dinâmica de memória.

## Estrutura do Projeto

- `atividade1.c` - Fundamentos de ponteiros e modificação direta
- `atividade2.c` - Passagem por referência com funções
- `atividade3.c` - Ponteiros para structs
- `atividade4.c` - Aritmética de ponteiros em arrays
- `atividade5.c` - Alocação dinâmica de memória (malloc/free)

## Conceitos Abordados

### Atividade 1: Ponteiros Básicos
- Declaração de ponteiros
- Operador de endereço (&)
- Operador de desreferência (*)
- Modificação de valores via ponteiro

### Atividade 2: Funções e Ponteiros
- Passagem por referência
- Funções void que modificam valores originais
- Encapsulamento de lógica

### Atividade 3: Structs e Ponteiros
- Definição de estruturas (struct)
- Operador seta (->)
- Passagem de structs por referência

### Atividade 4: Arrays e Aritmética
- Arrays de structs
- Aritmética de ponteiros (ptr + i)
- Acesso a membros sem notação de colchetes

### Atividade 5: Memória Dinâmica
- Função malloc() para alocação
- Função free() para liberação
- Tratamento de erros de alocação
- Arrays de tamanho variável

## Como Compilar e Executar

```bash
# Compilar cada arquivo
gcc atividade1.c -o atividade1
gcc atividade2.c -o atividade2
gcc atividade3.c -o atividade3
gcc atividade4.c -o atividade4
gcc atividade5.c -o atividade5

# Executar
./atividade1
./atividade2
./atividade3
./atividade4
./atividade5
