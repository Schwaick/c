/*
    1- Condições
    2- Repetições
    3- Uso do tipo booleano
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int i,numero,numero2 = 0,contador = 0,codigo,pessoas = 0;
    bool termina = false;

    for(i=0;i<5;i++) {
        printf("Digite um numero: ");
        scanf("%d",&numero);

        if(numero%2==0) {
            printf("O numero eh par \n");
        } else {
            printf("O numero eh impar \n");
        }
    }

    printf("\n\n\n");

    while(numero2 >= 0) {
        printf("Digite um numero: ");
        scanf("%d",&numero2);
        contador++;
    }

    printf("Vezes: %d",contador);

    system("cls");

    do {
        printf("Digite um codigo de menu: ");
        scanf("%d",&codigo);

        switch(codigo) {
        case 0:
            termina = true;
            break;
        case 1:
            pessoas++;
            printf("%d pessoas estao no restaurante \n",pessoas);
            break;
        case 2:
            if(pessoas > 0) pessoas--;
            printf("%d pessoas estao no restaurante \n",pessoas);
            break;
        case 3:
            printf("Lugares disponiveis: %d \n",10-pessoas);
            break;
        default:
            break;
        }
    } while(pessoas < 10 && !termina);

    return 0;
}
