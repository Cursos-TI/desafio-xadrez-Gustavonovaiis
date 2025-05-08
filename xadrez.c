#include <stdio.h>

int main() {
    // Variáveis para controlar o número de casas a serem percorridas
    int i;

    // Simulação do movimento da TORRE (5 casas para a direita)
    printf("\n=== Movimento da TORRE ===\n");
    for (i = 1; i <= 5; i++) { // Usando FOR para a Torre
        printf("Movendo para: Direita\n");
    }

    // Simulação do movimento do BISPO (5 casas na diagonal para cima e à direita)
    printf("\n=== Movimento do BISPO ===\n");
    i = 1; // Inicializando o contador
    while (i <= 5) { // Usando WHILE para o Bispo
        printf("Movendo para: Cima, Direita\n");
        i++;
    }

    // Simulação do movimento da RAINHA (8 casas para a esquerda)
    printf("\n=== Movimento da RAINHA ===\n");
    i = 1; // Reinicializando o contador
    do { // Usando DO-WHILE para a Rainha
        printf("Movendo para: Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}