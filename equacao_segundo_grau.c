#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    printf("\n");
    delta = b*b - 4*a*c;
    printf("Delta = %.2f \n", delta);

    if (a == 0) {
        printf("Nao e uma equacao de segundo grau.\n");
    } else if (delta < 0) {
        printf("Nao existem raizes reais.\n");
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("x' = %f x'' = %f", x1, x2);
    }

    return 0;
}