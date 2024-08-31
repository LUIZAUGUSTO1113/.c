#include <stdio.h>

int main() {
    char nome[100];
    int ano;

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("%s, qual o ano do seu aniversario?: ", nome);
    scanf("%d", &ano);

    if(ano <= 0){
        printf("ANO INVALIDO\n");
        return 0;
    }

    if((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)){
        printf("%s, voce nasceu em %d - (ano bissexto!)", nome, ano);
    }else{
        printf("%s, voce nasceu em %d!", nome, ano);
    }

    return 0;
}