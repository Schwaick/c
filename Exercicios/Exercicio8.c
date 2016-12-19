/*
    Escreva um programa que lê dois inteiros positivos m e n e calcula o mínimo múltiplo comum entre eles.
*/

#include <stdio.h>

void proximoPrimo(int *primo);
int mmc(int m, int n);

int main() {
    int m,n;

    printf("Digite um numero: ");
    scanf("%d",&m);

    printf("Digite outro numero: ");
    scanf("%d",&n);

    printf("\n\tO mmc(%d,%d) = %d \n",m,n,mmc(m,n));

    return 0;
}

void proximoPrimo(int *primo) {
    int i,contador = 0;

    while(1) {
        /* *primo++; => da erro*/
        *primo+=1;

        for(i=1;i<=*primo;i++) {
            if(*primo%i == 0) contador++;
        }

        if(contador == 2) {
            break;
        } else {
            contador = 0;
        }
    }
}

int mmc(int m, int n) {
    int primo = 2, resultado = 1;

    printf("\n\tProcesso: \n");
    printf("\t-------------------------\n\n");
    while(m != 1 || n != 1) {
        if(m % primo == 0 || n % primo == 0) {
            printf("\t%d , %d | %d \n", m,n,primo);

            if(m % primo == 0) m /= primo;
            if(n % primo == 0) n /= primo;

            resultado*=primo;
        } else {
            proximoPrimo(&primo);
        }
    }
    printf("\t%d , %d | %d \n", m,n,resultado);
    printf("\n\t-------------------------\n");

    return resultado;
}
