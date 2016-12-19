/*
    Um número a é dito permutação de um número b se os dígitos de a formam uma permutação dos dígitos de b.

    Exemplo:   5412434 é uma permutação de 4321445, mas não é uma permutação de 4312455.

    Obs.: Considere que o dígito 0 (zero) não aparece nos números.

    (a) Faça uma função contadígitos que dados um inteiro n e um inteiro d, 0 < d <= 9,
    devolve quantas vezes o dígito d aparece em n.

    (b) Usando a função do item anterior, faça um programa que lê dois inteiros positivos a e b e
    responda se a é permutação de b.
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
