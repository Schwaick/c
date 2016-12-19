/*
    1) Receber um nome e imprimir as 4 primeiras letras do nome
    2) Receber um nome e imprimir as letras na posição impar
    9) Receber do teclado uma mensagem e imprimir quantas letras A, E,
        I, O, U tem esta mensagem. Considerar minúscula e maiúscula.
*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main() {
    char nome[40],mensagem[100];
    int cont,a,e,i,o,u;

    printf("Digite um nome: ");
    scanf("%[^\n]s", nome);

    /* 1) */
    printf("tamanho do nome: %d\n", strlen(nome));
    printf("quatro primeiras letras: %c%c%c%c \n",nome[0],nome[1],nome[2],nome[3]);

    /* 2) */
    printf("letras na posicao impar: ");
    for(cont=0;cont<strlen(nome);cont++) {
        if(cont%2==1) printf("%c",nome[cont]);
    }

    /* 9-forma1) */
    a = e = i = o = u = 0;
    printf("\n\nDigite uma mensagem: ");
    getchar();
    scanf("%[^\n]s", mensagem);
    for(cont=0;cont<strlen(mensagem);cont++) {
        switch(tolower(mensagem[cont])) {
        case 'a': a++; break;
        case 'e': e++; break;
        case 'i': i++; break;
        case 'o': o++; break;
        case 'u': u++; break;
        }
    }
    printf("Quantidade de vogais: \n");
    printf("A:\tE:\tI:\tO:\tU: \n");
    printf("%d \t%d \t%d \t%d \t%d \n\n", a,e,i,o,u);

    /* 9-forma2) */
    /*Para sair desse getchar->ao terminar a mensagem de enter, e depois ctrl z, e enter novamente*/
    int c;
    int na = 0, ne = 0, ni = 0, no = 0, nu = 0,nc = 0;
    while((c = getchar()) != EOF) {
        switch (c) {
        case 'a':  case 'A': ++na; break;
        case 'e':  case 'E': ++ne; break;
        case 'i': case 'I': ++ni; break;
        case 'o':  case 'O': ++no ;break;
        case 'u': case 'U': ++nu; break;
        default: ++nc; break;
        }
    }
    printf("\nA:\tE:\tI:\tO:\tU:\t Outros\n");
    printf ("%d \t%d \t%d \t%d \t%d \t%d\n",na,ne,ni,no,nu,nc);
    return 0;
}
