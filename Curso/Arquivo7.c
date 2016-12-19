/*
    1- malloc
    2- free
    3- realloc
    4- calloc
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void limpa(void);

int main() {
    /*
        Diferentes vari�veis terem diferentes valores, dependendo da arquitetura.
        H� m�quina que um inteiro ocupa 2 bytes, em outras ocupam 4 bytes.
        Para alocar de maneira correta, use a fun��o sizeof()
    */
    char *nome;
    nome = (char *) malloc(20*sizeof(char)); /*malloc retorna um ponteiro do tipo void, por isso temos q dar cast*/

    printf("Digite um nome: ");
    gets(nome);

    printf("%s \n", nome);

    limpa();

    char *senha;

    senha = (char *) malloc(21*sizeof(char));
    printf("Digite sua senha [ate 20 caracteres]: ");
    scanf("%[^\n]s", senha);

    printf("Senha: %s\n", senha);
    printf("Endere�o e valor antes da free e NULL(): %d,%s\n", senha, senha);

    free(senha); /*liberar memoria que foi usada*/
    senha = NULL; /*mesmo apos usar o free, o ponteiro ainda guarda o endere�o da senha, entao eh bom deixa-lo como NULL para 'esquecer o endereco'*/

    printf("Endere�o e valor depois da free e NULL(): %d,%s\n", senha, senha);

    limpa();

    /*Se nao houver espaco suficiente na memoria para a alocacao, o malloc retornar� NULL*/
    int* ptr = (int *) malloc(1000000000000000000);

    if(ptr == NULL)
        printf("Sem espa�o suficiente\n");

    limpa();

    /*teste com: 'aaaa aaaaaa aaaaaaaaaaa aaaaaaaa aa aa'[39] d� erro*/
    char *nome2 = (char *) malloc(21*sizeof(char));
    printf("Digite um nome [ate 20 caracteres]: ");
    scanf("%[^\n]s", nome2);
    printf(nome2);

    /*teste com: 'aaaa aaaaaa aaaaaaaaaaa aaaaaaaa aa aa'[39] roda*/
    nome2 = (char *) realloc(nome2, 51*sizeof(char) ); /*realoca a memoria*/
    printf("Digite um nome [ate 50 caracteres]: ");
    scanf("%[^\n]s", nome2);
    printf("%s",nome2);

    free(nome2);
    nome2 = NULL;

    limpa();

    float *ptro = (float *) calloc(10, sizeof(float) );
    *ptro = 10.57;
    printf("%f",*ptro);
    free(ptro);
    printf("%f",*ptro);
    return 0;
}

void limpa(void) {
    char valor;
    printf("\n\nDeseja limpar a tela? (S/N): ");
    scanf("%c",&valor);
    while(getchar() != '\n'); /*Limpa o buffer do teclado*/
    if(toupper(valor) == 'S') system("cls");
    else printf("\n\n");
}
