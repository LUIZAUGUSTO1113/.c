#include <stdio.h>
int main(){
    char nome[50];
    char sobrenome[50];

    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite o sobrenome: ");
    gets(sobrenome);

    printf("Nome completo: %s %s", nome, sobrenome);	
}