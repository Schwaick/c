/*
    Dadas duas matrizes reais  Amxn e Bpxq, calcular o produto de A por B.
*/

#include <stdio.h>
#include <stdlib.h>

void inicializaMatriz(char nome, int linhas, int colunas, int matriz[linhas][colunas]) {
    int i,j;

    for(i=0;i<linhas;i++) {
        for(j=0;j<colunas;j++) {
            printf("Digite um valor para %c[%d,%d]: ",nome,i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n");
}

void print(char nome, int linhas, int colunas, int matriz[linhas][colunas]) {
    int i,j;

    printf("\n\t----------------------\n");
    printf("\t|      Matriz %c      |\n",nome);
    printf("\t----------------------\n\n");

    for(i=0;i<linhas;i++) {
        for(j=0;j<colunas;j++) {
            if(j==0) {
                printf("\t|%d",matriz[i][j]);
            } else if(j==colunas-1) {
                printf("\t%d|",matriz[i][j]);
            } else {
                printf("\t%d",matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\n");
}

void produto(int m,int n,int p,int q, int matrizA[m][n],int matrizB[p][q],int matrizR[m][q]) {
    int i,j,k;

    for(i=0;i<m;i++) {
        for(j=0;j<q;j++) {
            matrizR[i][j] = 0;
            for (k = 0; k < n; k++) /* Para cada coluna de A*/
                matrizR[i][j] = matrizR[i][j] + matrizA[i][k] * matrizB[k][j];
        }
    }
}

int main() {
    int m,n,p,q;

    printf("Digite os valores de m,n,p,q: ");
    scanf( "%d %d %d %d", &m, &n, &p, &q);

    if(n == p) {
        int matrizA[m][n],matrizB[p][q],matrizR[m][q];
        inicializaMatriz('A',m,n,matrizA);
        inicializaMatriz('B',p,q,matrizB);
        produto(m,n,p,q,matrizA,matrizB,matrizR);

        print('A',m,n,matrizA);
        print('B',p,q,matrizB);
        print('R',m,q,matrizR);
    } else {
        printf("n e p devem ser iguais.\n");
    }

    return 0;
}
