/*
    1- Constantes
    2- Funções
    3- Vetores/Matrizes
*/

#include <stdio.h>

#define TAM_MAX 10
#define NLIN 3
#define NCOL 2

void ImprimeVet (int Tam, int Vet[TAM_MAX])
{
    int i;
    for (i=0; i< Tam; i++)
    {
      printf("%d", Vet[i]);
    }
}
void ImprimeVet2 (int Matriz[NLIN][NCOL])
{
    int i,j;
    for(i=0; i < NLIN; i++) {
        for(j=0; j < NCOL; j++) {
            printf("[%d][%d] = %d", i,j,Matriz[i][j]);
        }
    }
}

int main() {
    int i,j;
    int VetReais[TAM_MAX],Matriz[NLIN][NCOL];

    for(i=0; i<TAM_MAX; i++) {
        VetReais[i] = TAM_MAX - i;
    }

    ImprimeVet(TAM_MAX, VetReais);
    printf("\n\n\n");

    for(i=0; i < NLIN; i++) {
        for(j=0; j < NCOL; j++) {
            printf("Digite um valor: ");
            scanf("%d",&Matriz[i][j]);
        }
    }

    ImprimeVet2(Matriz);

    return 0;
}
