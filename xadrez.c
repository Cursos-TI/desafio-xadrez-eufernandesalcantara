#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    
    // Passo: Adiconar Protótipos das funções 
    // informa ao compilador que essas funções existem.

void mover_torre_recursivo(int casas);
void mover_rainha_recursivo(int casas);
void mover_bispo_recursivo(int casas);
void mover_bispo_loops_aninhados(int casas);
void mover_cavalo_complexo();
    
int main() {
    /*
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Usar constantes torna o código mais legivel e facil de manter.
    */
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    printf("--- Nível Mestre: Movimentos com funções e Recursividade ---\n\n");

    // Passo: Substituir todo o código de movementopor chamadasde função

    printf("-- Movimento da torre com Recursão (%d casas para a direita) ---\n", casas_torre);
    mover_torre_recursivo(casas_torre);
    printf("\n");

    printf("--- Movimento da Rainha com recursão (%d casas para a esquerda) ---\n",casas_rainha);
    mover_rainha_recursivo(casas_rainha);
    printf("\n");

    printf("--- Movimento do Bispo com Recursão (%d casas para a diagonal) ---\n", casas_bispo);
    mover_bispo_recursivo(casas_bispo);
    printf("\n");

    printf("--- Movimento do Bispo com loops aninhados (%d casas na diagonal) ---\n", casas_bispo);
    mover_bispo_loops_aninhados(casas_bispo);
    printf("\n");

    printf("--- Movimento do Cavalo com Loops Complexos (2 Cima, 1 Direita) ---\n");
    mover_cavalo_complexo();
    printf("\n");
    /*
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

    // nivel aventureiro - movimentação do cavalo
    // constantes para definir o movimento em "L" do Cavalo.
    const int mov_vertical = 2; // Duas casas para baixo
    const int mov_horizontal = 1; // Uma casa para esquerda

    printf("--- Nível Aventureiro: Movimento do Cavalo ---\n");
    printf("Movimento: %d casas para baixo e %d para esquerda\n", mov_vertical, mov_horizontal);
  
    // Loop para a parte vertical do movimento
    for (int i = 0; i < mov_vertical; i++) {
        printf("Baixo\n");
    }

    // Loop para a parte horizontal do movimento
    int casas_h = 0;
    while (casas_h < mov_horizontal) {
        printf("Esquerda\n");
        casas_h++;
    }

    printf("\n");


    
    


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    */
    return 0;
}

// Passo: Criar as funções vazias após a main
void mover_torre_recursivo(int casas) {
    // condição de parada: se não há mais casas, pare.
    if (casas <= 0) {
        return;
    }
    // ação: imprime o movimento.
    printf("Direita\n");
    // chamada recursiva: chama a si mesma com uma casa a menos
    mover_torre_recursivo(casas - 1);
}
// preenchendo a função da Rainha (mesma lógica, direção diferente)
void mover_rainha_recursivo(int casas){
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    mover_rainha_recursivo(casas - 1);
}
//preenchendo a função do Bispo (mesma logica, movimento diferente)

void mover_bispo_recursivo(int casas){
    if (casas <= 0) {
        return;
    }
printf("Cima, Direita\n");
mover_bispo_recursivo(casas - 1);

}

// Preenchendo a segunda função do bispo
void mover_bispo_loops_aninhados(int casas){
    // loop externo: controle o número de passos diagonais.
    for (int passo_atual = 1; passo_atual <= casas; passo_atual++){
        for (int i = 0; i < 1; i++) {
            printf("Passo %d: Cima, Direita\n", passo_atual);
        }
    }
}

void mover_cavalo_complexo() {
    const int mov_vertical = 2;
    const int mov_horizontal = 1;
    int passos_verticais_dados = 0;
    int passos_horizontais_dados = 0;

    // loop que executa até o movimento ser concluído.
    for (int i = 1; i <= 10; i++) {
        // fase: movimento vertical
        if (passos_verticais_dados < mov_vertical) {
            printf("Cima\n");
            passos_verticais_dados++;
            // 'continue' força o loop
            // garante que os 2 passos para cima terminem antes do proximo passo
            continue;
        }
        // fase: movimento horizontal
        if (passos_horizontais_dados < mov_horizontal) {
            printf("Direita\n");
            passos_horizontais_dados++;
        }

        if (passos_verticais_dados == mov_vertical && passos_horizontais_dados == mov_horizontal) {
            break;    
        }
    }
}
