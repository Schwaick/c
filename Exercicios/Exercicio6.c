/*
    Dado um número natural na base binária, transformá-lo para a base decimal.
    Exemplo: Dado 10010 a saída será 18, pois 1*2^4 + 0*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 18.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char bin[100];
    int i,potencia,soma = 0;

    printf("Digite um valor binario: ");
    scanf("%[^\n]",bin);

    potencia = strlen(bin) - 1;

    /*
        Porque usar bin[i]-'0':
        If you want to convert the char to int and a character '1' provides a ascii number that's not 1, you need to
        remove the offset '0' to realign it to count from 0-9. The consecutive numbers 1-9 are adjacent in the
        ascii integer number.
    */

    for(i=0;i<strlen(bin);i++) {
        soma+=(bin[i]-'0') * pow(2,potencia);
        potencia--;
    }

    printf("Valor na base decimal: %d \n",soma);
    return 0;
}
