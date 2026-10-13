int main() {
    float horas, valorHora, salario;
    
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas);
    
    printf("Digite o valor da hora normal: R$ ");
    scanf("%f", &valorHora);
    
    if (horas <= 160) {
        salario = horas * valorHora;
    } else {
        salario = (160 * valorHora) + 
                  ((horas - 160) * valorHora * 1.5);
    }
    
    printf("Salario total: R$ %.2f\n", salario);
    
    return 0;