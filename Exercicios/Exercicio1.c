/*
    Crie um programa que calcula a média de uma quantidade qualquer (informada pelo usuário) de números.
    O programa deve armazenas esses números em um vetor. Depois, use esse vetor para mostrar
    todos os números e mostrar a média dele.
    Use alocação dinâmica de memória para colocar os números no vetor. Não desperdice memória.
*/

#include <stdio.h>
#include <stdlib.h>

int *aloca(int num);
float media(int *numbers, int num);
void exibe(int *numbers, int num);

int main() {
    int num, *numeros;
    printf("Media de quantos numeros [0 para sair]: ");
    scanf("%d", &num);

    if(num > 0)
    {
        numeros = aloca(num); /*recebe o vetor com os numeros*/
        exibe(numeros,num);
        printf("\nA media destes numeros eh: %.2f\n", media(numeros, num) );
        free(numeros); /*libera o vetor da memoria*/
    }

    return 0;
}

/* funcao que retorna um vetor com os numeros */
int *aloca(int num)
{
    int count,*numbers;

    /*vetor que recebe o ponteiro do malloc de tamanho num(quantidade de numeros que o usuario deseja) */
    numbers = (int *)malloc(num*sizeof(int));

    for(count=0 ; count < num ; count++)
    {
        printf("Numero [%d]: ", count+1);
        scanf("%d", &numbers[count]);
    }

    return numbers;
}

float media(int *numbers, int num)
{
    float media=0.0;
    int count;

    for(count=0 ; count<num ; count++)
        media += numbers[count];

    return media/num;
}

void exibe(int *numbers, int num)
{
    int count;

    for(count=0 ; count < num ; count++)
        printf("%d", numbers[count]);
}
