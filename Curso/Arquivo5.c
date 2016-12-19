/*
    1- enum
    2- struct
*/

#include <stdio.h>

int main() {
    enum semana {dom,seg,ter,qua,qui,sex,sab};
    int dia,i;

    printf("Escolha um dia da semana: ");
    scanf("%d",&dia);

    switch(dia){
    case dom:printf("Domingo");break;
    case seg:printf("Segunda");break;
    case ter:printf("Terça");break;
    default:printf("Outro");break;
    }

    printf("\n\n\n");

    struct tipoAluno {
        char nome[50];
        int nota;
    };

    struct tipoAluno alunos[3];
    for(i=0;i<3;i++) {
        printf("Digite um nome: ");
        scanf("%s",alunos[i].nome);
        printf("Digite uma nota: ");
        scanf("%d",&alunos[i].nota);
    }
    for(i=0;i<3;i++) {
        printf("O aluno %s teve nota %d \n",alunos[i].nome,alunos[i].nota);
    }

    return 0;
}
