#include <stdio.h>
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n % 5 == 0){
        printf("O numero %d e divisivel por 5", n);
    }
    else{
        printf("O numero %d nao e divisivel por 5", n);
    }
    return 0;
}