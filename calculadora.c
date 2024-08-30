#include <stdio.h>
#include <math.h>

double soma(double n1, double n2);
double sub(double n1, double n2);
double mult(double n1, double n2);
double div(double n1, double n2);
double media(double n1, double n2);

int main(){
    double n1, n2;
    char escolha;
    printf("Escolha a operacao: \n 1 -> soma \n 2 -> subtracao \n 3 -> multiplicao \n 4 -> divisao \n 5 -> media \n");
    scanf("%c", &escolha);  

    printf("Digite o primeiro numero: ");
    scanf("%lf", &n1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &n2);

    if(escolha == '1'){
        printf("%.2f \n", soma(n1, n2));
    }
    else if(escolha == '2'){
        printf("%.2f \n", sub(n1, n2));
    }
    else if(escolha == '3'){
        printf("%.2f \n", mult(n1, n2));
    }
    else if(escolha == '4'){
        printf("%.2f \n", div(n1, n2));
    }
    else if(escolha == '5'){
        printf("%.2f \n", media(n1, n2));
    }else{
        printf("Operacao Invalida!");
    }
    return 0;
}

double soma(double n1, double n2){
    return n1 + n2;
}
double sub(double n1, double n2){
    return n1 - n2;
}
double mult(double n1, double n2){
    return n1 * n2;
}
double div(double n1, double n2){
    return n1 / n2;
}
double media(double n1, double n2){
    // return (n1 + n2) / 2;
    return div(soma(n1, n2), 2); 
}