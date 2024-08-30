#include <stdio.h>

int main(){
    int d, m, a;
    int d_passados, m_passados, a_passados, total;

    printf("Digite o dia: ");
    scanf("%d", &d);
    if(d < 0 || d >= 31){
        printf("Erro: O dia digitado nao respita o limite! \n");
        printf("ATENCAO DIGITE UM DIA ENTRE (01-31)");
        return 0;
    }else{
        printf("Digite o mes: ");
        scanf("%d", &m);
    }
    if(m < 0 || m >= 12){
        printf("Erro: O mes digitado nao respita o limite! \n");
        printf("ATENCAO DIGITE UM MES ENTRE (01-12)");
        return 0;
    }else{
        printf("Digite o ano: ");
        scanf("%d", &a);
    }
    if(a <= 1900){
        printf("Erro: O ano digitado nao respita o limite! \n");
        printf("ATENCAO DIGITE UM ANO ENTRE (1900 - ...)");
        return 0;
    }else{
        d_passados = d - 1;
        m_passados = (m - 1) * 30;
        a_passados = (a - 1900) * 365;
        total = d_passados + m_passados + a_passados;
        printf("Passaram %d dias!", total);
    }
    return 0;
}