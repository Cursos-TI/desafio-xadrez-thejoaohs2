#include <stdio.h>

int main() {
    // Movimento da Torre - usando for (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    // Movimento do Bispo - usando while (5 casas na diagonal para cima e à direita)
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }
    
    // Movimento da Rainha - usando do-while (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    
    // Movimento do Cavalo - usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    
    // Primeiro movimento: duas casas para baixo
    for (i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    
    // Segundo movimento: uma casa para a esquerda
    i = 0;
    while (i < 1) {
        printf("Esquerda\n");
        i++;
    }
    
    return 0;
}
