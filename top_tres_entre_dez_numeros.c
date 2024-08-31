#include <stdio.h>

int main() {
    int m1, m2, m3, numero;
    m1 = 0;
    m2 = 0;
    m3 = 0;

    for(int i = 1; i <= 10; i++){
        printf("Digite o %d valor: ", i);
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
    }

    printf("Os tres maiores valores sao: %d, %d, %d", m1, m2, m3);
    return 0;
}