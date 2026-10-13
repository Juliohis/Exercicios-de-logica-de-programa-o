#include <stdio.h>

int main() {
    int valor;
    int n200, n100, n50, n20, n10, n5;
    int q200, q100, q50, q20, q10, q5;
    int total;
    int restante;

    printf("Informe o valor do saque: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor invalido.\n");
        return 0;
    }

    if (valor % 5 != 0) {
        printf("Nao e possivel realizar o saque: valor nao multiplo de 5.\n");
        return 0;
    }

    n200 = 0;
    n100 = 0;
    n50  = 0;
    n20  = 0;
    n10  = 0;
    n5   = 0;

    q200 = 0;
    q100 = 0;
    q50  = 0;
    q20  = 0;
    q10  = 0;
    q5   = 0;

    restante = valor;

    while (restante >= 200 && n200 < 1) {
        restante -= 200;
        q200++;
        n200++;
    }
    while (restante >= 100 && n100 < 1) {
        restante -= 100;
        q100++;
        n100++;
    }
    while (restante >= 50 && n50 < 1) {
        restante -= 50;
        q50++;
        n50++;
    }
    while (restante >= 20 && n20 < 1) {
        restante -= 20;
        q20++;
        n20++;
    }
    while (restante >= 10 && n10 < 1) {
        restante -= 10;
        q10++;
        n10++;
    }
    while (restante >= 5 && n5 < 1) {
        restante -= 5;
        q5++;
        n5++;
    }

    while (restante >= 200) {
        restante -= 200;
        q200++;
    }
    while (restante >= 100) {
        restante -= 100;
        q100++;
    }
    while (restante >= 50) {
        restante -= 50;
        q50++;
    }
    while (restante >= 20) {
        restante -= 20;
        q20++;
    }
    while (restante >= 10) {
        restante -= 10;
        q10++;
    }
    while (restante >= 5) {
        restante -= 5;
        q5++;
    }

    if (restante != 0) {
        printf("Nao e possivel realizar o saque.\n");
        return 0;
    }

    total = q200 + q100 + q50 + q20 + q10 + q5;

    printf("Saque realizado com sucesso.\n");
    printf("Notas de R$ 200: %d\n", q200);
    printf("Notas de R$ 100: %d\n", q100);
    printf("Notas de R$ 50: %d\n", q50);
    printf("Notas de R$ 20: %d\n", q20);
    printf("Notas de R$ 10: %d\n", q10);
    printf("Notas de R$ 5: %d\n", q5);
    printf("Total de cedulas: %d\n", total);

    return 0;
}
