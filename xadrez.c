#include <stdio.h>
#include <string.h>

/*
 Função torre()
 Simula os movimentos da torre no eixo horizontal.
 É recursiva: enquanto "move" for maior que 0, imprime
 que a torre se move para a direita e chama a si mesma
 diminuindo o valor de move.
*/

void torre(int move) {
    if (move > 0) {
        printf("Torre: 'Direita'\n");
        torre(move - 1);
    }
}

/*
 Função bispo()
 Simula movimentos do bispo. Aqui foi implementado um
 for que faz o bispo se mover "Cima - Direita".
 O segundo for só imprime "Direita" uma vez por iteração
 pois contém um break logo após imprimir.
*/

void bispo(int move) {
    for (int i = 0; i < move; i++){
        printf("Bispo: Cima - ");
        for (int j = 0; j <= i; j++) {
            printf("Direita\n");
            break;
        }
    }
}

/*
 Função rainha()
 Muito semelhante à torre: recursiva e imprime deslocamento
 para a direita enquanto "move" for maior que 0.
*/

void rainha(int move) {
    if (move > 0) {
        printf("Rainha: 'Direita'\n");
        rainha(move - 1);
    }
}

/*
 Função cavalo()
 Simula um movimento de cavalo fixo: sobe duas casas
 e depois vai para a direita.
 O laço externo é desnecessário pois só roda 1 vez.
 Em seguida, a função se chama recursivamente reduzindo move.
*/

void cavalo(int move) {
    if (move > 0) {
        for (int i = 0; i < 1; i++){
            printf("Cavalo: ");
            for (int j = 2; j > 0; j--){
                printf("Cima - ");
            }
            printf("Direita\n");
        }
        cavalo(move - 1);
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    /*
    int torre = 0, bispo = 5, rainha = 0;
    char cavalo[100] = "Cavalo: ";
    */

    // Implementação de Movimentação do Bispo
    /*
    for (int i = 0; i < bispo; i++){
        printf("Bispo: 'Cima, Direita'\n");
    }
    printf("\n");
    */
    

    // Implementação de Movimentação da Torre
    /*
    while (torre < 5) {
        printf("Torre: 'Direita'\n");
        torre++;
    }
    printf("\n");
    */
    

    // Implementação de Movimentação da Rainha
    /*
    do {
        printf("Rainha: 'Direita'\n");
        rainha++;
    } while (rainha < 8);
    printf("\n");
    */
    

    // Nível Aventureiro - Movimentação do Cavalo
    /*
    for (int i = 0; i < 1; i++){
        for (int j = 0; j < 2; j++){
            strcat(cavalo, "Baixo - ");
        }
        strcat(cavalo, "Esquerda");
        printf("%s\n", cavalo);
    }
    printf("\n");
    */
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    int move = 5;

    torre(move);
    printf("\n");
    bispo(move);
    printf("\n");
    rainha(move);
    printf("\n");
    cavalo(move);
    
    return 0;
}
