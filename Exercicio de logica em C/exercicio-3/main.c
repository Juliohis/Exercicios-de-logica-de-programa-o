#include <stdio.h>

int main() {
    int A, B, C;
    int maior, menor, intermediario;

    // Leitura dos três números inteiros
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    if (A >= B && A >= C) {
        maior = A;
    } else if (B >= A && B >= C) {
        maior = B;
    } else {
        maior = C;
    }

    if (A <= B && A <= C) {
        menor = A;
    } else if (B <= A && B <= C) {
        menor = B;
    } else {
        menor = C;
    }

    if (A != maior && A != menor) {
        intermediario = A;
    } else if (B != maior && B != menor) {
        intermediario = B;
    } else {
        intermediario = C;
    }

    printf("\nResultados:\n");
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Valor intermediario: %d\n", intermediario);

    if (A == B || A == C || B == C) {
        printf("Existem valores repetidos? Sim\n");
    } else {
        printf("Existem valores repetidos? Nao\n");
    }

    if (A == B && B == C) {
        printf("Os tres valores sao iguais? Sim\n");
    } else {
        printf("Os tres valores sao iguais? Nao\n");
    }

    if (A < B && B < C) {
        printf("Estao em ordem crescente? Sim\n");
    } else {
        printf("Estao em ordem crescente? Nao\n");
    }

    if (A > B && B > C) {
        printf("Estao em ordem decrescente? Sim\n");
    } else {
        printf("Estao em ordem decrescente? Nao\n");
    }

    return 0;
}