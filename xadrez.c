#include <stdio.h>
    
// Passo: Adiconar Protótipos das funções 
// informa ao compilador que essas funções existem.

void mover_torre_recursivo(int casas);
void mover_rainha_recursivo(int casas);
void mover_bispo_recursivo(int casas);
void mover_bispo_loops_aninhados(int casas);
void mover_cavalo_complexo();
    
int main() {
   
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
