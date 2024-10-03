#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i, primo;
    primo = 1;

    do{
        printf("Digite um número: ");
        scanf("%d", &num);

        if(num <= 1){
            printf("Digite um número válido! - números menores ou iguais a 1 não são primos!\n");
        }
    }while(num <= 1);

    for(i = 2; i < num; i++){
        if(num % i == 0){
            primo = 0;
            break;
        }
    }

    if(primo){
        printf("%d é número primo!", num);
    }else{
        printf("%d não é número primo!", num);
    }

    return 0;
}