/*
    24) Apresentar o total da soma obtida dos cem primeiros números inteiros
    25) Apresentar todos os números divisíveis por 4 que sejam menores que 200
    46) Preencher um vetor com números inteiros(8unidades); solicitar um número do teclado.
        Pesquisar se esse número existe no vetor. Se existir,imprimir em qual posição do vetor.
        Se não existir, imprimir MSG que não existe.

*/

#include <stdio.h>

int main() {
    int i,soma = 0,aux,vetor[8];

    /* 24) */
    for(i=1;i<=100;i++) {
        soma+=i;
    }
    printf("Soma: %d \n",soma);

    /* 25) */
    for(i=1;i<200;i++) {
        if(i%4 == 0) printf("%d,",i);
    }

    /* 46) */
    printf("\n\n");
    for(i=0;i<8;i++) {
        printf("Digite um numero: ");
        scanf("%d",&vetor[i]);
    }

    printf("Digite um numero para verificacao: ");
    scanf("%d",&aux);

    for(i=0;i<8;i++) {
        if(vetor[i] == aux) {
            printf("Posicao no vetor: %d \n",i);
            break;
        }

        if(i==7) {
            printf("Nao existe \n");
            break;
        }
    }
    return 0;
}
