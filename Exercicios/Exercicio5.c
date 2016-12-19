/*
    O n-ésimo número da seqüência de Fibonacci Fn é dado pela seguinte fórmula de recorrência:
            f1 = 1
            f2 = 1
            fi = fi-1 + fi-2   para i >= 3

    Sequencia: (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...) -> ou seja, a partir do 3º termo, o resultado eh a soma dos dois anteriores
    Faça um programa que, dado n, calcula Fn.
*/

#include <stdio.h>

/* forma1 - muito uso da memoria*/
/* com termos maiores que 45, retorna valor errado e/ou negativo, nao sei porque */
int fibonacci(int n) {
    if(n >= 3) {
        n = fibonacci(n-1) + fibonacci(n-2);
        return n;
    } else if(n == 1 || n == 2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);

    //printf("O termo %d na sequencia de fibonacci da: %d", n, fibonacci(n));

    /* forma2 - menor uso da memoria */
    /* com termos maiores que 45 tambem retorna valor errado e/ou negativo. */
    int fant, fatual, fprox,contador;

    fant   = 0;
    fatual = 1;
    contador = 1;

    while (contador < n) {
        fprox  = fatual + fant;
        fant   = fatual;
        fatual = fprox;
        contador = contador + 1;
    }
    printf("Numero %d de Finobacci = %d\n", n, fatual);

    return 0;
}
