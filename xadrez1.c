#include <stdio.h>
void bt(int casa) {  ///bispo e torre
    if (casa >= 0 && casa <= 5 && casa-0){ 
    printf("Direita \n");
    bt(casa-1);
    }else if (casa <0 || casa >=6) {
    printf("Assim cai, vamos tentar de novo  \n");}}
void rainha(int casas) {
    if (casas >= 0 && casas <= 8 && casas-0){
    printf("%d Esquerda \n", casas);
    rainha(casas-1);
    }else if (casas <0 || casas >=9) {
    printf("Assim ela cai, vamos tentar de novo \n");}}
int main(){
    int jogador; 
    do{
        int casas;
        printf("**Bem Vindo ao Xadrez**\nO que voce gostaria de fazer?\n");
        printf("1. Iniciar\n");
        printf("2. Regras\n");
        printf("3. Sair\n");
        scanf("%d", &jogador);
            switch (jogador){
    case 1:
    do{
    printf("Qual peca voce gostaria de jogar? \n");
    printf("1. Bispo\n");
    printf("2. Torre\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("5. Voltar\n");
    scanf(" %d", &jogador); 
    switch (jogador){
    case 1:
    printf("Quantas Casas Voce Gostaria De Mover o Bispo? \n");
    scanf("%d", &casas);
    bt(casas);
    break;
    case 2:
    printf("Quantas Casas Voce Gostaria De Mover a Torre? \n");
    scanf("%d", &casas);
    bt(casas);
    break;
    case 3:
    printf("Quantas Casas Voce Gostaria De Mover a Rainha? \n");
    scanf("%d", &casas);
    rainha(casas);
    break;
    case 4:
    printf("Quantas Casas Voce Gostaria De Mover o Cavalo para cima? \n");
    scanf("%d", &casas);
    for (int i = 1; i <= casas; i++) {  
    if (i == 1){
    printf("Cavalo moveu %d casas para cima\n", i);
    }else if (i == 2){
    printf ("Cavalo moveu %d casas para cima\n", i);}
    else if (i < 0 || i >= 3){
    printf ("Sem roubar, Sao no maximo 2 casa");}}
    printf("Quantas Casas Voce Gostaria De Mover o Cavalo para a direita? \n");
    scanf("%d", &casas);
    for (int i = 1; i <= casas; i++) {
    if (i == 1){ 
    printf("Cavalo moveu %d casas para direita\n", i);
    }else if (i == 2)
    {printf ("Cavalo moveu %d casas para direita\n", i);}
    else if (i < 0 || i >= 3){
    printf ("Sem roubar, Sao no maximo 2 casa");}}
    break;
    }
    } while (jogador != 5);
    printf("Voltando\n");
    break;
    case 2:
    printf("** As Regras do jogo sao:\n O Bispo pode se mover ate 5 casas nas diagonais.\n A Torre pode se mover ate 5 na horizontal e vertical.\n A Rainha pode se mover 8 casa e em qualquer direcao.\n");
    printf(" O Cavalo se movimenta em L, uma casa para cima ou para baixo na vertical e \n mais de duas casas na horizontal OU duas casas para cima ou para baixo na vertical e mais uma casa na horizontal\n ");
    printf ("Digite 3 para voltar\n");
    scanf("%d", &casas);
    break;
    case 3:
    printf("Ate mais...\n"); 
     break; 
    default:
     ("Nao entendi");
    break;
    }
    } while (jogador != 3);
    printf("\n");
}