#include <stdio.h>
#include <ctype.h> 

int main() {
    char resposta;

    printf("Pense em um dos seguintes personagens: Luffy, Zoro, Nami, Robin, Usopp, Sanji, Chopper, Franky.\n");
    printf("Responda as perguntas com 's' para sim e 'n' para nao.\n\n");

    printf("1. Seu personagem e mulher? (s/n): ");
    scanf(" %c", &resposta);

    if (tolower(resposta) == 's') {
        printf("Ela e a navegadora do bando? (s/n): ");
        scanf(" %c", &resposta);
        if (tolower(resposta) == 's') {
            printf("\n>> Seu personagem e a Nami!\n");
        } else {
            printf("\n>> Seu personagem e a Robin!\n");
        }
    } else {
        printf("2. Seu personagem e humano? (s/n): ");
        scanf(" %c", &resposta);

        if (tolower(resposta) == 'n') {
            printf("Ele e um ciborgue? (s/n): ");
            scanf(" %c", &resposta);
            if (tolower(resposta) == 's') {
                printf("\n>> Seu personagem e o Franky!\n");
            } else {
                printf("\n>> Seu personagem e o Chopper!\n");
            }
        } else {
            printf("3. Ele e o capitao do bando? (s/n): ");
            scanf(" %c", &resposta);

            if (tolower(resposta) == 's') {
                printf("\n>> Seu personagem e o Luffy!\n");
            } else {
                printf("4. Ele usa espadas para lutar? (s/n): ");
                scanf(" %c", &resposta);

                if (tolower(resposta) == 's') {
                    printf("\n>> Seu personagem e o Zoro!\n");
                } else {
                    printf("5. Ele e cozinheiro? (s/n): ");
                    scanf(" %c", &resposta);

                    if (tolower(resposta) == 's') {
                        printf("\n>> Seu personagem e o Sanji!\n");
                    } else {
                        printf("\n>> Seu personagem e o Usopp!\n");
                    }
                }
            }
        }
    }
    
    return 0;
}
