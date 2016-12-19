/*
    12) Receber um nome do teclado e imprimí-lo de trás pra frente
    13) Receber do teclado a sigla do estado de uma pessoa e imprimir de onde ela é
    16) Solicitar no teclado uma frase com no máximo 40 letras. Se o tamanho for maior que 40, dar
        uma mensagem de entrada inválida e solictar novamente, se passar, imprimir a frase na vertical
        com um tempo em cada letra.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[40],sigla[2],frase[40];
    int i;

    /* 12) */
    printf("Digite um nome: ");
    gets(nome);

    for(i=strlen(nome)-1;i>=0;i--) {
        printf("%c",nome[i]);
    }

    /* 13) */
    /*strcmp=> compara duas strings*/
    printf("\n\nDigite uma sigla: ");
    scanf("%s",sigla);

    if(strcmp(sigla,"mg") == 0 || strcmp(sigla,"MG") == 0) {
        printf("Mineiro\n");
    } else if(strcmp(sigla,"rj") == 0 || strcmp(sigla,"RJ") == 0) {
        printf("Carioca\n");
    } else if(strcmp(sigla,"sp") == 0 || strcmp(sigla,"SP") == 0) {
        printf("Paulista\n");
    } else {
        printf("Outros estados\n");
    }

    /* 16) */
    fflush(stdin);

    do {
        printf("\nDigite uma frase: ");
        scanf("%[^\n]",frase);
        fflush(stdin);

        if(strlen(frase) > 40) printf("Entrada invalida\n");
    } while(strlen(frase) > 40);

    printf("%s",frase);

    return 0;
}
