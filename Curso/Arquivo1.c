/*
    1- Estrutura de um arquivo C
    2- Uso de comentário
    3- Printando algo na tela
    4- Tabulação e Quebrar linha
    5- Escapar aspas duplas
    6- Pausar a execução
    7- Substituição de dados
*/

#include <stdio.h>

int main() {
    printf("Ola");
    printf("\tMundo!\n");
    printf("Ola \"Mundo\" novamente!\n");

    printf("Esse eh o %d printf\n",4);
    printf("1/2 = %f\n",0.5);
    printf("Letra %c trocada\n",'X');
    printf("Frase: %s\n","Frase escrita");

    /*system("pause");*/
    return 0;
}
