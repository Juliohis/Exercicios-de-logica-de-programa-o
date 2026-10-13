#include <stdio.h>

int main() {
    float valor, imposto;
    printf("Digite um valor?\n");
    scanf("%f", &valor);

    imposto = valor * 0.08;
    valor = valor + imposto;

    printf("O valor final é,  %f\n", valor);
    
    
    return 0;
}