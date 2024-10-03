#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome_cad[50], nome_acesso[50], senha_cad[50], senha_acesso[50];
    int tentativas_nome, tentativas_senha;
    tentativas_nome = 1;
    tentativas_senha = 1;

    printf("CADASTRO\n");
    printf("Username: ");
    scanf("%s", nome_cad);
    printf("Senha: ");
    scanf("%s", senha_cad);

    printf("ACESSAR CONTA\n");
    while(tentativas_nome <= 10){
        printf("Digite o username: ");
        scanf("%s", nome_acesso);
        if(strcmp(nome_acesso, nome_cad)!= 0){
            printf("Usuário INCORRETO\n");
            printf("Tentativas restantes: %d\n", 10 - tentativas_nome);
            tentativas_nome++;
        }else{
            while(tentativas_senha <= 10){
                printf("Digite a senha: ");
                scanf("%s", senha_acesso);
                if(strcmp(senha_acesso, senha_cad)!= 0){
                    printf("Senha INCORRETA\n");
                    printf("Tentativas restantes: %d\n", 10 - tentativas_senha);
                    tentativas_senha++;
                }else{
                    printf("ACESSO CONCEDIDO!\n");
                    printf("Bem-vindo, %s!", nome_cad);
                    return 0;
                }
            }

            printf("ACESSO NEGADO!");
            return 0;
        }
    }

    printf("ACESSO NEGADO!");
    
    return 0;
}