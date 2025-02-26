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
void cavalo(){
    int casasc, casasd;
    printf("Quantas casas para cima? (1 ou 2)\n");
    scanf("%d", &casasc);
    printf("Quantas casas para a direita? (1 ou 2)\n");
    scanf("%d", &casasd);
    if (casasc == 1 && casasd == 2){
    printf("1 cima \n1 Direita \n2 Direita \n");
    } else if (casasc == 2 && casasd == 1){
    printf("1 cima \n2 cima \n1 Direita \n");}
    else {
        printf("Assim nao vai, vamos tentar de novo \n");}
}
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
    printf("Quantas Casas Voce Gostaria De Mover o Cavalo ");
    cavalo();
    break;
    }
    } while (jogador != 5);
    printf("Voltando\n");
    break;
    case 2:
    printf("** As Regras do jogo sao:\n O Bispo pode se mover ate 5 casas nas diagonais.\n A Torre pode se mover ate 5 na horizontal e vertical.\n A Rainha pode se mover 8 casa e em qualquer direcao.\n");
    printf(" O Cavalo se movimenta em L, uma casa para cima ou para baixo na vertical e mais de duas casas na horizontal  \n OU duas casas para cima ou para baixo na vertical e mais uma casa na horizontal\n ");
    printf ("**Digite 3 para voltar**\n");
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