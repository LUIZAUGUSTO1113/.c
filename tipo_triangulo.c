#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float l1, l2, l3;

    do{
        printf("Digite o primeiro lado do triângulo: ");
        scanf("%f", &l1);
        if(l1 <= 0){
            printf("O lado de um triângulo deve ser maior que zero!\n");
        }
    }while(l1 <= 0);

    do{
        printf("Digite o segundo lado do triângulo: ");
        scanf("%f", &l2);
        if(l2 <= 0){
            printf("O lado de um triângulo deve ser maior que zero!\n");
        }
    }while(l2 <= 0);

    do{
        printf("Digite o terceiro lado do triângulo: ");
        scanf("%f", &l3);
        if(l3 <= 0){
            printf("O lado de um triângulo deve ser maior que zero!\n");
        }
    }while(l3 <= 0);

    if(l1 == l2 && l2 == l3){
        printf("\nO triângulo é EQUILÁTERO!");
    }
    if(l1 == l2 || l1 == l3 || l2 == l3){
        printf("\nO triângulo é ISÓSCELES!");
    }
    if(l1 != l2 && l2 != l3){
        printf("\nO triângulo é ESCALENO!");
    }

    return 0;
}