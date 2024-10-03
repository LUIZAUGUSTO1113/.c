#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, chute, tentativas;
    tentativas = 1;

    srand(time(0));
    num = rand() % 101;

    while(tentativas <= 10){
        printf("Digite um número: ");
        scanf("%d", &chute);

        if(chute <= 0 || chute > 100){
            printf("Digite um número válido! (1-100)\n");
            continue;
        }

        if(chute == num){
            printf("Você ACERTOU!");
            break;
        }else{
            printf("Você ERROU!\n");
            if(chute < num){
                printf("O número é maior que %d\n", chute);
            }else{
                printf("O número é menor que %d\n", chute);
            }
            printf("Número de tentativas restantes: %d\n", 10 - tentativas);
        }
        tentativas++;
    }
    if(tentativas > 10){
        printf("O número era: %d", num);
    }

    return 0;
}