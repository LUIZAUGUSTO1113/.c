#include <stdio.h>

int main() {
    int m1, m2, m3, numero;

    printf("Digite o primeiro valor: ");
    scanf("%d", &m1);

    printf("Digite o segundo valor: ");
    scanf("%d", &numero);
    if(numero > m1){
        m2 = m1;
        m1 = numero;
    }else{
        m2 = numero;
    }

    printf("Digite o terceiro valor: ");
    scanf("%d", &numero);
    if(numero > m1){
        m3 = m2;
        m2 = m1;
        m1 = numero;
    }else if(numero > m2){
        m3 = m2;
        m2 = numero;
    }else{
        m3 = numero;
    }

    printf("Digite o quarto valor: ");
    scanf("%d", &numero);
    if(numero > m1){
        m3 = m2;
        m2 = m1;
        m1 = numero;
    }else if(numero > m2){
        m3 = m2;
        m2 = numero;
    }else if(numero > m3){
        m3 = numero;
    }

    printf("Digite o quinto valor: ");
    scanf("%d", &numero);
    if(numero > m1){
        m3 = m2;
        m2 = m1;
        m1 = numero;
    }else if(numero > m2){
        m3 = m2;
        m2 = numero;
    }else if(numero > m3){
        m3 = numero;
    }

    printf("Digite o sexto valor: ");
    scanf("%d", &numero);
    if(numero > m1){
        m3 = m2;
        m2 = m1;
        m1 = numero;
    }else if(numero > m2){
        m3 = m2;
        m2 = numero;
    }else if(numero > m3){
        m3 = numero;
    }

    printf("Os tres maiores valores sao: %d, %d, %d\n", m1, m2, m3);
    return 0;
}