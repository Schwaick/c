/*
    Dados dois strings (um contendo uma frase e outro contendo uma palavra), determine o número de
    vezes que a palavra ocorre na frase.

    Exemplo: Para a palavra ANA e a frase :
        ANA E MARIANA GOSTAM DE BANANA

    Temos que a palavra ocorre 4 vezes na frase.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char frase[100],palavra[50];
    int i,j,tamFrase,tamPalavra,aux=0,igual=0,contador=0;

    printf("Digite uma frase: ");
    gets(frase);

    printf("Digite uma palavra: ");
    gets(palavra);

    tamFrase = strlen(frase);
    tamPalavra = strlen(palavra);

    /* Para cada letra da frase */
    for(i=0;i<tamFrase;i++) {
        /* Se a letra da frase na posicao i bater com a primeira letra da palavra */
        if(tolower(frase[i]) == tolower(palavra[aux])) {
            /* A partir da posicao que bateu ate a posicao de acordo com o length da palavra. */
            /* De acordo com o exemplo da ANA:
                    Frase: ANA E MARIANA...
                    Palavra: ana
                    O loop vai comparar: ANA e ana
               Os 'a's iriam bater, e o for seguinte iria de 0 ate 2 (ANA)
            */
            for(j=i;j<=i+tamPalavra-1;j++) {
                /* Se as letrar irem batendo, seta igual=1 e incrementa o aux para comparar a proxima letra da palavra */
                if(tolower(frase[j]) == tolower(palavra[aux])) {
                    igual = 1;
                    aux++;
                } else { /* Se alguma das letras nao baterem, reseta tudo e termina esse for, pois n tem porque continuar */
                    igual = 0;
                    aux = 0;
                    break;
                }
            }

            /* Se terminar o loop anterior e igual ainda for 1, entao a substring da frase naquela posicao eh igual a palavra */
            /* Reseta tudo para a proxima comparação */
            if(igual == 1) {
                contador++;
                igual = 0;
                aux = 0;
            }
        }
    }

    printf("\"%s\" ocorre %d vezes na frase \"%s\" \n", palavra, contador, frase);

    return 0;
}
