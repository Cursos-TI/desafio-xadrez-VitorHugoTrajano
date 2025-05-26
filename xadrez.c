#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(){
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int opcao;

    printf("Bem-Vindo ao início do nosso jogo de Xadrez.\n");

    do {
        printf("Menu Principal.\n");
        printf("1. Bispo, o Bispo andará 5 casas na diagonal para direita.\n");
        printf("2. Torre, a Torre andará 5 casas a direita.\n");
        printf("3. Rainha, a Rainha andará 8 casas a esquerda.\n");
        printf("4. Sair do programa.\n");
        printf("Escolha uma das opções: ");
        scanf("%d", &opcao);

        
        if(opcao == 1){// Implementação de Movimentação do Bispo
            for(int i = 1; i <= 5; i++) {
                printf("%d° casa para cima.\n", i);
                printf("%d° casa para direita.\n", i);
            }
        } else if(opcao == 2) {// Implementação de Movimentação do Torre
            for(int i = 1; i <= 5; i ++) {
                printf("%d° casa a direita.\n", i);
            }
        } else if(opcao == 3) {// Implementação de Movimentação do Rainha
            for(int i = 1; i <= 8; i ++) {
                printf("%d° casa a esquerda.\n", i);
            }
        }else if(opcao == 4){
            printf("Finalizando o programa...\n");
        }else {
            printf("Opção inválida, o programa será finalizado...");
        }
    }while(opcao >= 1 && opcao <= 3);
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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
