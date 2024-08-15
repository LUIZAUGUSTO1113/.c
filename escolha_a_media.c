#include <stdio.h>
int main(){
    char choice;
    float n1, n2, n3, n4, result;
    printf("Escolha o tipo de media \n A - Aritmetica \n P - Ponderada \n H - Harmonica \n");
    scanf("%c", &choice);

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    if(choice == 'A'){
        result = (n1+n2+n3+n4)/4;
    }
    if(choice == 'P'){
        result = (2*n1+3*n2+5*n3+10*n4)/20;
    }
    if(choice == 'H'){
        result = 4/((1/n1)+(1/n2)+(1/n3)+(1/n4));
    }
    printf("A media e %f", result);
    return 0;
}