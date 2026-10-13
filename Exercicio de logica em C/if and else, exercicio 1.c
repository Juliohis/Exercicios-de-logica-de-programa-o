#include <stdio.h>

int main() {
    
    int idade;
    
    printf("Digite a idade do atleta:\n");
    scanf("%d", &idade);
    
    if (idade<5){
        printf("O atleta é jovem demais.");
    }
    else if (idade>=5 && idade<=7){
        printf("Infantil A");
    }
    else if (idade>=8 && idade<=10){
        printf("Infantil B");
    }
    else if (idade>=11 && idade<=13){
        printf("juvenil A");
    }
    else if (idade>=14 && idade<=17){
        printf("juvenil B");
    }
    else {
        printf("Sênior");
    }

return 0;
}