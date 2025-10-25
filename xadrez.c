#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Usar constantes torna o código mais legivel e facil de manter.
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    printf("--- Nível Novato: Simulação de Movimentos ---\n\n");


    // Implementação de Movimentação da torre
    // Ultilizamos a estrutura 'for' porque é ideal para um número fixo e conhecido de repetição.
    // Simula a movimentação da Torre 5 casas para a direita.

    printf("--- Movimento da Torre (%d casas para direita) ---\n", casas_torre);
    for (int i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n"); // adiciona espaço para melhor vizualização
    

    // Implementação de Movimentação do Bispo
    // Utilizamos a estrutura 'while' para simuloar a movimentação do Bispo.
    // É uma alternativa flexível ao 'for', útil quando a condição de parada pode ser mais complexa.
    // Simula a movimentação do Bispo 5 casas diagonal (para cima e à direita).
    printf("--- Movimento do Bispo (%d casas na diagonal) ---\n", casas_bispo);
    int contador_bispo = 1; // variavel de controle para loop
    while (contador_bispo <= casas_bispo) {
        printf("Casa %d: Cima, Direita\n", contador_bispo);
        contador_bispo++; // importante incrementar o contador para não criar um loop infinito.
    }

    printf("\n");


    // Implementação de Movimentação da Rainha
    // Ultilizamos a estrutura 'do-while'. Apeincipal característica é que o bloco de codigo
    // é executado pelo menos uma vez antes de a condição ser verificada
    // simula a movimentação da Rainha 8 casas para a esquerda.
    printf("--- Movimento da Rainha (%d casas para a esquerda) ---\n", casas_rainha);
    int contador_rainha = 1; // variavel de contole de loop
    do {
        printf("Casa %d: Esquerda\n", contador_rainha);
        contador_rainha++; //incrementa o contador a cada passo.
    } while (contador_rainha <= casas_rainha);
    printf("\n");

    
    


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
