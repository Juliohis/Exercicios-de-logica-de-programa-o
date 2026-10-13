#include <stdio.h>

int main() {
    
    int a;
    int b;
    int c;
        
    printf("Escreva o lado a:");
    scanf("%d", &a);
    
    printf("Escreva o lado b:");
    scanf("%d", &b);
    
    printf("Escreva o lado c:");
    scanf("%d", &c);

    if  (a>0 && b>0 && c>0 && (((a+b)>c) && ((a+c)>b) && ((b+c)>a))) {
        printf("Isto é um triangulo");
    }
    else {
        printf("Isto não é um triangulo");
        return 0;
    }
    
    if (a == b && a == c && c == b) {
        printf(", equilatero");
    }
    else if ((a == b && a == c) || (b == a && b==c) || (c ==a && c==b)){
        printf(", isósceles");
    }
    else if (a != b && a != c && c != b) {
        printf(", escaleno");
    }
    
    if (a>b && a>c) {
        if (c*c + b*b == a*a){
            printf(", retangulo.");
        }
        else if (c*c + b*b > a*a) {
            printf(", acutângulo.");
        }
        else if (c*c + b*b < a*a) {
            printf(", obtusângulo.");
        }
    }
    else if (b>a && b>c) {
        if (c*c + a*a == b*b){
            printf(", retangulo.");
        }
        else if (c*c + a*a > b*b) {
            printf(", acutângulo.");
        }
        else if (c*c + a*a < b*b) {
            printf(", obtusângulo.");
        }
    }
    else if (c>b && c>a) {
        if (a*a + b*b == c*c){
            printf(", retangulo.");
        }
        else if (a*a + b*b > c*c) {
            printf(", acutângulo.");
        }
        else if (a*a + b*b < c*c) {
            printf(", obtusângulo.");
        }
    }
    // Contorno para resolver uma limitação do codigo em identificar o tipo do equilatero.
    else if (a == b && a == c && c == b) {
            printf(", acutângulo.");
        }
return 0;
}
