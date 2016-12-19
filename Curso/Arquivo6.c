/*
    1- Recursividade
    2- Ponteiro
    3- Apelidos de tipos
    4- Constantes
    5- Passagem por referencia
*/

#include <stdio.h>
#include <ctype.h>

typedef int it; /*apelido para o int*/
const float PI = 3.14; /*Essa constante ocupa memoria*/
#define PII 3.14 /*Essa constante NÃO ocupa memoria*/

void imprime(it inicio, it fim) {
    if(inicio <= fim) {
        printf("%d \n",inicio);
        imprime(inicio+1,fim);
    }
}

void limpa() {
    char valor;
    printf("\n\nDeseja limpar a tela? (S/N): ");
    scanf("%c",&valor);
    while(getchar() != '\n'); /*Limpa o buffer do teclado*/
    if(toupper(valor) == 'S') system("cls");
    else printf("\n\n");
}

void incrementa(int *num) {
    *num += 1;
}

int main() {
    imprime(10,20);
    limpa();

    it valor = 10, *ponteiro = &valor;
    it **ponteiroDoPonteiro = &ponteiro; /*guardar o endereco do ponteiro*/
    void *ponteiroG = ponteiro; /*ponteiro generico que recebe outro ponteiro*/

    printf("valor = %d \n",valor);
    printf("endereco do ponteiro = %x \n",ponteiro); /*%x = hexadecimal*/
    printf("valor do endereco do ponteiro = %d \n",*ponteiro);

    valor = 20;

    printf("novo valor do endereco do ponteiro = %d \n",*ponteiro);
    printf("valor do ponteiro generico = %d \n",*(int*)ponteiroG); /*precisamos dar cast no ponteiro generico para mostra-lo*/
    printf("valor do ponteiroDoPonteiro = %d \n",**ponteiroDoPonteiro);
    limpa();

    it *vet[3],n1=10,n2=11,n3=12,i; /*ponteiro vetor para guardar endereços*/
    vet[0]=&n1;
    vet[1]=&n2;
    vet[2]=&n3;

    for(i=0;i<3;i++) {
        printf("%d\n",*vet[i]);
    }
    limpa();

    int num = 10;
    incrementa(&num);
    printf("numero = %d \n",num);

    return 0;
}
