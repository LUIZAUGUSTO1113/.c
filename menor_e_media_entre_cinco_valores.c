#include <stdio.h>
int main(){
    float valor, menor, media;

    printf("Digite o primeiro numero: ");
    scanf("%f",&menor);
    media = menor;
    printf("Digite o segundo numero: ");
    scanf("%f",&valor);
    media = media + valor;
    if(valor < menor){
        menor = valor;
    }
    printf("Digite o terceiro numero: ");
    scanf("%f",&valor);
    media = media + valor;
    if(valor < menor){
        menor = valor;
    }
    printf("Digite o quarto numero: ");
    scanf("%f",&valor);
    media = media + valor;
    if(valor < menor){
        menor = valor;
    }
    printf("Digite o quinto numero: ");
    scanf("%f",&valor);
    media = (media + valor) / 5;
    if(valor < menor){
        menor = valor;
    }

    printf("A media e %.2f \n", media);
    printf("O menor numero foi: %.2f", menor);
}