#include <stdio.h>
#include <string.h>

int main() {

    char palavra[20];
    sprintf(palavra, "ABACATE");

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    printf("*********************\n");
    printf("*   Jogo de Forca   *\n");
    printf("*********************\n\n");

    do {

        for(int i = 0; i < strlen(palavra); i++) {
            int achou = 0;            

            for(int j = 0; j < tentativas; j++) {

                if(chutes[j] == palavra[i]) {
                    achou = 1;
                    break;
                }
            }

            if(achou) {
                printf("%c ", palavra[i]);
            } else {
                printf("_ ");
            }
        }
        printf("\n");

        char chute;
        scanf(" %c ", &chute);

        chutes[tentativas] = chute;
        tentativas++;


    } while (!acertou && !enforcou); 


}
