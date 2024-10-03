#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char produto[50];
    float valor, desconto, compra;
    int rodando, escolha, continuar;
    rodando = 1;
    compra = 0;

    while(rodando){
        printf("Qual o produto?: ");
        scanf(" %s", produto);
        printf("Digite o preço do produto (%s): ", produto);
        scanf("%f", &valor);
        printf("O produto tem desconto aplicável?:\n1 - SIM\n2 - NÃO\n");
        scanf("%d", &escolha);

        if(escolha == 1){
            printf("Qual o desconto aplicável?: ");
            scanf("%f", &desconto);
            valor = valor - desconto;
            compra = compra + valor;
        }
        if(escolha == 2){
            compra = compra + valor;
        }
        printf("Valor do %s: R$%.2f\n", produto, valor);	

        printf("Deseja adicionar outro produto?:\n1 - SIM\n2 - NÃO\n");
        scanf("%d", &continuar);

        if(continuar == 2){
            rodando = 0;
        }
    }

    printf("Valor da compra: R$%.2f", compra);

    return 0;
}