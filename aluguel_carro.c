#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float km, taxa_base, taxa_add;

    do{
        printf("Qual a taxa base para uso do veículo?: ");
        scanf("%f", &taxa_base);

        if(taxa_base <= 0){
            printf("A taxa base não pode ser igual ou menor que zero!\n");
        }
    }while(taxa_base <= 0);

    do{
        printf("Quanto quilômetros foram rodados?: ");
        scanf("%f", &km);

        if(km <= 0){
            printf("Digite uma quilometragem válida!\n");
        }
    }while(km <= 0);

    do{
        printf("Qual a taxa por quilômetro utilizada?: ");
        scanf("%f", &taxa_add);

        if(taxa_add <= 0){
            printf("A taxa não pode ser igual ou menor que zero!\n");
        }
    }while(taxa_add <= 0);

    printf("TAXA BASE: R$%.2f\n", taxa_base);
    printf("TAXA ADICIONAL: R$%.2f\n", (taxa_add * km));
    printf("TOTAL: R$%.2f", taxa_base + (taxa_add * km));

    return 0;
}