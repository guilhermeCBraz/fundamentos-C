#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
printf("\n\n");
printf("                    |ZZzzz                                                  \n");
printf("                    |                                                       \n");
printf("                    |                                                       \n");
printf("                    |                                                       \n");
printf("        |ZZzzz      /^\\            |ZZzzz                                  \n");
printf("        |          |~~~|           |                                        \n");
printf("        |        |^^^^^^^|        / \\                    Bem vindo ao      \n");
printf("       /^\\       |[]+    |       |~~~|               Jogo de Adivinhação!  \n");
printf("    |^^^^^^^|    |    +[]|       |   |                                      \n");
printf("    |    +[]|/\\/\\/\\/\\^/\\/\\/\\/\\/|^^^^^^^|                            \n");
printf("    |+[]+   |~~~~~~~~~~~~~~~~~~|    +[]|                                    \n");
printf("    |       |  []   /^\\   []   |+[]+   |                                   \n");
printf("    |   +[]+|  []  || ||  []   |   +[]+|                                    \n");
printf("    |[]+    |      || ||       |[]+    |                                    \n");
printf("    |_______|------------------|_______|                                    \n");
printf("\n\n");

    int chute;
    int acertou = 0;
    double pontos = 1000;
    int tentativa = 1;
    int numerotentativas;

    int nivel;
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha : ");
    scanf("%d", &nivel);

    switch (nivel){
        case 1:
            numerotentativas = 20;
            break;
        case 2:
            numerotentativas = 15;
            break;
        default:
            numerotentativas = 6;
            break;
    }
    

    srand(time(0));
    int numerosecreto = rand() % 100;

    for(int i = 1; i <= numerotentativas; i++) {
        printf("\nTentativa %d\n", tentativa);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            continue;
        }

        printf("Seu chute foi %d\n", chute);

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou) {
            break;
        } else if(maior) {
            printf("Seu chute foi maior do que o número secreto!\n");
        } else {
            printf("Seu chute foi menor do que o número secreto!\n");
        }

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
        pontos = pontos - pontosperdidos;

        tentativa++;
    }

    printf("\nFim de jogo!\n");

    if(acertou){
        printf("\n\n");
        printf("                   __ooooooooo__                        \n");
        printf("              oOOOOOOOOOOOOOOOOOOOOOo                   \n");
        printf("          oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo               \n");
        printf("       oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo            \n");
        printf("     oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo          \n");
        printf("   oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo        \n");
        printf("  oOOOOOOOOOOO*  *OOOOOOOOOOOOOO*  *OOOOOOOOOOOOo       \n");
        printf(" oOOOOOOOOOOO      OOOOOOOOOOOO      OOOOOOOOOOOOo      \n");
        printf(" oOOOOOOOOOOOOo  oOOOOOOOOOOOOOOo  oOOOOOOOOOOOOOo      \n");
        printf("oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo     \n");
        printf("oOOOO     OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     OOOOo     \n");
        printf("oOOOOOO OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOo     \n");
        printf(" *OOOOO  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOO*      \n");
        printf(" *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*      \n");
        printf("  *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*       \n");
        printf("   *OOOOOOo  *OOOOOOOOOOOOOOOOOOOOOOO*  oOOOOOO*        \n");
        printf("     *OOOOOOOo  *OOOOOOOOOOOOOOOOO*  oOOOOOOO*          \n");
        printf("       *OOOOOOOOo  *OOOOOOOOOOO*  oOOOOOOOO*            \n");
        printf("          *OOOOOOOOo           oOOOOOOOO*               \n");
        printf("              *OOOOOOOOOOOOOOOOOOOOO*                   \n");
        printf("                   \"\"ooooooooo\"\"                    \n");
        printf("\n\n");

        printf("Você ganhou!\n");
        printf("Você fez %.2f pontos\n", pontos);
        printf("Obrigado por jogar!\n");
    } else {
        printf("\n\n");
        printf("                            oooo$$$$$$$$$$$$oooo                                    \n");
        printf("                          oo$$$$$$$$$$$$$$$$$$$$$$$$o                               \n");
        printf("                       oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o         o$   $$ o$         \n");
        printf("       o $ oo        o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o       $$ $$ $$o$        \n");
        printf("    oo $ $ \"$      o$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$o       $$$o$$o$        \n");
        printf("    \"$$$$$$o$     o$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$o    $$$$$$$$         \n");
        printf("      $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$          \n");
        printf("      $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  \"\"\"$$$         \n");
        printf("       \"$$$\"\"\"\"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \"$$$     \n");
        printf("        $$$   o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \"$$$o        \n");
        printf("       o$$\"   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$o       \n");
        printf("       $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\" \"$$$$$$ooooo$$$$o    \n");
        printf("      o$$$oooo$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$$$$$$$$$$$$$$$$     \n");
        printf("      $$$$$$$$\"$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$\"\"\"\"\"\"\"\"  \n");
        printf("     \"\"\"\"       $$$$    \"$$$$$$$$$$$$$$$$$$$$$$$$$$$$\"      o$$$              \n");
        printf("                \"$$$o     \"\"\"$$$$$$$$$$$$$$$$$$\"$$\"         $$$               \n");
        printf("                  $$$o          \"$$\"\"$$$$$$\"\"\"\"           o$$$               \n");
        printf("                   $$$$o                 oo             o$$$\"                      \n");
        printf("                    \"$$$$o      o$$$$$$o\"$$$$o        o$$$$                       \n");
        printf("                      \"$$$$$oo     \"\"$$$$o$$$$$o   o$$$$\"\"                     \n");
        printf("                         \"\"$$$$$oooo  \"$$$o$$$$$$$$$\"\"\"                       \n");
        printf("                            \"\"$$$$$$$oo $$$$$$$$$$                                \n");
        printf("                                    \"\"\"\"$$$$$$$$$$$                             \n");
        printf("                                        $$$$$$$$$$$$                                \n");
        printf("                                         $$$$$$$$$$\"                               \n");
        printf("                                          \"$$$\"\"\"\"                             \n");
        printf("\n\n");

        printf("Você perdeu!\n");
    }
    

}