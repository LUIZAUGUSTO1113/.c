#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float km, comb, p_comb;

    do{
        printf("Quantos quilômetros você percorreu?: ");
        scanf("%f", &km);
        if(km <= 0){
            printf("Digite um valor válido para quilometragem!\n");
        }
    }while(km <= 0);

    do{
        printf("Quantos litros foram necessários de combustível?: ");
        scanf("%f", &comb);
        if(comb <= 0){
            printf("Digite um valor real de litros de combustível gastos!\n");
        }
    }while(comb <= 0);

    do{
        printf("Qual foi o preço do litro de combustível?: ");
        scanf("%f", &p_comb);
        if(p_comb <= 0){
            printf("Digite um valor real do preço do litro de combustível!\n");
        }
    }while(p_comb <= 0);

    printf("\nO consumo médio de combustível foi: %.2f km/l\n", (km / comb));
    printf("A viagem teve um custo de R$%.2fx", (km / comb) * p_comb);

    return 0;
}