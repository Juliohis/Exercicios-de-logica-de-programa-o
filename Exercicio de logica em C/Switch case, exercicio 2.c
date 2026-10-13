#include <stdio.h>

int main() {
    
    int mes;
    
    printf("Digite o numero do mês:\n");
    scanf("%d", &mes);
    
    switch (mes) {
    
    case 1:
        printf("janeiro, tem 31 dias");
        break;
    
    case 2:
        printf("Fevereiro, tem 28 dias"); 
        break;
    
    case 3:
        printf("Março, tem 31 dias");
        break;
    
    case 4:
        printf("Abril, tem 30 dias");
        break;
        
    case 5:
        printf("Maio, tem 31 dias");
        break;
        
    case 6:
        printf("Junho, tem 30 dias");
        break;
        
    case 7:
        printf("julho, tem 31 dias");
        break;
        
    case 8:
        printf("Agosto, tem 31 dias");
        break;
        
    case 9:
        printf("Setembro, tem 30 dias");
        break;
    
    case 10:
        printf("Outubro, tem 31 dias");
        break;
        
    case 11:
        printf("Novembro, tem 30 dias");
        break;
        
    case 12:
        printf("Dezembro, tem 31 dias");
        break;
        
    default:
        printf("Só existem 12 cavaleiros de ouro");
    }
return 0;
}