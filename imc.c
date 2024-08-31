#include <stdio.h>
int main(){
    float peso, altura, imc;
    
    printf("Qual o seu peso?: ");
    scanf("%f", &peso);
    if(peso < 0 || peso > 500){
        printf("PESO INVALIDO!");
        return 0;
    }

    printf("Qual a sua altura?: ");
    scanf("%f", &altura);
    if(altura < 0 || altura > 3){
        printf("ALTURA INVALIDA!");
        return 0;
    }

    imc = peso /(altura * altura);

    printf("IMC = %.2f \n", imc);

    if(imc <= 16.9){
        printf("Muito abaixo do peso!\n");
    }else if(imc >= 17 && imc <= 18.4){
        printf("Abaixo do peso!\n");
    }else if(imc >= 18.5 && imc <= 24.9){
        printf("Peso normal!\n");
    }else if(imc >= 25 && imc <= 29.9){
        printf("Acima do peso!\n");
    }else if(imc >= 30 && imc <= 34.9){
        printf("Obesidade grau I!\n");
    }else if(imc >= 35 && imc <= 40){
        printf("Obesidade grau II!\n");
    }else{
        printf("Obesidade grau III!\n");
    }

    return 0;
}