/*
    1- Variaveis
    2- Substituição de variaveis
    3- Leitura de dados digitados
*/

#include <stdio.h>

int main(void) {
    int numero = 46,altura;
    float valor = 8.37,comprimento;
    char letra = 'X',nome[50],sobrenome[50];

    printf("Variavel numero: %d \n",numero);
    numero+=10;
    printf("Variavel numero + 10: %d \n",numero);
    printf("Variavel valor: %f \n",valor);
    /*%10.2f = numero de 10 digitos com 2 casas decimais. OBS: como o número é menor que 10, o programa preenche com espaços vazios*/
    printf("Variavel valor: %10.2f \n",valor);
    printf("Variavel valor: %.2f \n",valor);
    printf("Variavel letra: %c \n",letra);

    /*Na leitura: para variáveis não vetores deve ser utilizado o '&' antes do nome da variável*/
    /*Para variáveis vetores(como string) não é necessário o '&'*/
    printf("Digite um nome: ");
    gets(nome);
    printf("Nome digitado: %s \n", nome);

    printf("Digite um comprimento: ");
    scanf("%f",&comprimento);
    printf("Comprimento digitado: %f \n",comprimento);

    printf("Digite uma altura: ");
    scanf("%d",&altura);
    printf("Altura digitada: %d \n",altura);

    /*fflush limpa o buffer.*/
    /*Quando pegamos o nome, o fflush não foi necessário porque não havia um scanf antes, ou seja, não havia um 'ENTER' no buffer.*/
    /*Quando fossemos pegar o sobrenome, haveria um 'ENTER'(porque colocamos a altura e apertamos o 'ENTER') no buffer, e então, o programa leria o 'ENTER' automaticamente sem pedir para digitarmos nada.*/
    /*Para resolver esse problema colocamos o fflush antes do gets (apenas quando há um scanf antes do gets)*/
    /*Outra forma de resolver o problema é colocar todos os gets antes dos scanf*/
    fflush(stdin);

    printf("Digite um sobrenome: ");
    gets(sobrenome);
    printf("Sobrenome digitado: %s \n", sobrenome);

    return 0;
}
