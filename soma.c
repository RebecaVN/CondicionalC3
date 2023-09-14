#include <stdio.h>

int main() {
    int a, b, soma;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &b);

    soma = a + b;

    if (soma > 10) {
        printf("A soma dos valores é maior do que 10: %d\n", soma);
    }

    return 0;
}
