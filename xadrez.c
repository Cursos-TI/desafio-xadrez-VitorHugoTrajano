#include <stdio.h>

// Desafio de Xadrez - MateCheck
void movimentoBispo(int i) {
    if(i < 6){
        printf("%dª casa para cima.\n", i);
        printf("%dª casa para direita.\n", i);
        movimentoBispo(i + 1);
    }
}

void movimentoTorre(int i){
    if(i < 6){
        printf("%dª casa a direita.\n", i);
        movimentoTorre(i + 1);
    }
}

void movimentoRainha(int i){
    if(i < 9){
        printf("%dª casa a esquerda.\n", i);
        movimentoRainha(i + 1);
    }
}

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
        printf("4. Cavalo, o Cavalo irá fazer um movimento em L.\n");
        printf("5. Sair do programa.\n");
        printf("Escolha uma das opções: ");
        scanf("%d", &opcao);

        
        if(opcao == 1){// Implementação de Movimentação do Bispo
            int movBispo = 1;
            movimentoBispo(movBispo);
            printf("\n");
        } else if(opcao == 2) {// Implementação de Movimentação do Torre
            int movTorre = 1;
            movimentoTorre(movTorre);
            printf("\n");
        } else if(opcao == 3) {// Implementação de Movimentação do Rainha
            int movRainha = 1;
            movimentoRainha(movRainha);
            printf("\n");
        }else if(opcao == 4){//Nível aventureiro - loops aninhados, implementando o movimento do Cavalo.
            for(int i = 1, j = 1; i <= 2; i++){
                printf("%dª casa para cima.\n", i);
                for(j = 1; j < i; j++){
                    printf("%dª casa para direita.\n", j);
                }
            }
            printf("\n");
        }else if(opcao == 5){
            printf("Finalizando o programa...\n");
        }else {
            printf("Opção inválida, o programa será finalizado...");
        }
    }while(opcao >= 1 && opcao <= 4);
    
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
