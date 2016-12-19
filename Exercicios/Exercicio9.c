/*
    Tentando descobrir se um dado era viciado, um dono de cassino honesto (ha! ha! ha! ha!) o
    lançou n vezes. Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FACES 6

int main() {
    srand(time(NULL)); /* Faz o rand() operar melhor*/

    enum dados {um,dois,tres,quatro,cinco,seis};
    int i,vezes,random,ocorrencias[FACES] = {0,0,0,0,0,0};

    printf("Deseja lancar o dado quantas vezes? ");
    scanf("%d",&vezes);

    for(i=0;i<vezes;i++) {
        random = rand()%6; /*0 a 5*/

        switch(random) {
            case um: ocorrencias[um]++; break;
            case dois: ocorrencias[dois]++; break;
            case tres: ocorrencias[tres]++; break;
            case quatro: ocorrencias[quatro]++; break;
            case cinco: ocorrencias[cinco]++; break;
            case seis: ocorrencias[seis]++; break;
        }

        printf("No %d lancamento deu a face: %d \n",i+1,random+1);
    }

    printf("\n\n");

    for(i=0;i<FACES;i++) {
        printf("Quantidade de faces %d: %d\n",i+1,ocorrencias[i]);
    }

    return 0;
}
