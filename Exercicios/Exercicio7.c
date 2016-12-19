/*
    Um n�mero a � dito permuta��o de um n�mero b se os d�gitos de a formam uma permuta��o dos d�gitos de b.

    Exemplo:   5412434 � uma permuta��o de 4321445, mas n�o � uma permuta��o de 4312455.

    Obs.: Considere que o d�gito 0 (zero) n�o aparece nos n�meros.

    (a) Fa�a uma fun��o contad�gitos que dados um inteiro n e um inteiro d, 0 < d <= 9,
    devolve quantas vezes o d�gito d aparece em n.

    (b) Usando a fun��o do item anterior, fa�a um programa que l� dois inteiros positivos a e b e
    responda se a � permuta��o de b.
*/

#include <stdio.h>

int contadigitos(int n, int d);
int permutacao(int a, int b);

int main() {
    int a,b;

    printf("Digite um numero: ");
    scanf("%d",&a);

    printf("Digite outro numero: ");
    scanf("%d",&b);

    if(permutacao(a,b) == 1) printf("Eh permutacao");
    else printf("Nao eh permutacao");

    return 0;
}

int contadigitos(int n, int d) {
    int conta, resto;

    conta = 0;

    while (n != 0) {
        resto = n % 10;
        n = n/10;
        if (resto == d) conta++;
    }

    return conta;
}

int permutacao(int a, int b) {
    int d,perm = 1;

    for (d = 1; d <= 9; d++)
        if (contadigitos(a,d) != contadigitos(b,d)) {
            perm = 0;
            break;
        }

    return perm;
}
