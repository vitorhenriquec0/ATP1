#include <stdio.h>

int main () {
    
    float sal_atual, sal_reaj;
    char continuar;
    
    do {
    printf("Digite o salario atual:\n");
    scanf("%f", &sal_atual);
    
    if (sal_atual < 500) {
        sal_reaj = sal_atual * 1.15;
    }
    
    else if (sal_atual >= 500 && sal_atual <= 1000) {
        sal_reaj = sal_atual * 1.1;
    }
    
    else {
        sal_reaj = sal_atual * 1.05;
    }
    
    printf("O salario reajustado é: R$%.2f\n", sal_reaj);
    printf("O reajuste foi de: R$%.2f\n", sal_reaj - sal_atual);
    
    printf("Deseja calcular outro salário? (S/N)\n");
    scanf(" %c", &continuar);} while (continuar == 's' || continuar == 'S');
    
    return 0;
}