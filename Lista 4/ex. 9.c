#include <stdio.h>

int main () {
    
    int anterior = 0, atual = 1, proximo;
    
    printf("Os primeiros 15 termos da sequência de Fibonacci são:\n");
    
    // Looping para o cálculo
    for (int i=1; i<=15; i++) {
        printf("%d", anterior);
        
        // Adicionar vírgulas, por questões visuais.
        if (i < 15) {
            printf(", ");
        }
        
        // Atualizar os termos para a próxima iteração
        proximo = anterior + atual;
        
        anterior = atual; // O termo anterior vira o termo atual
        atual = proximo; // O "proximo" calculado vira o novo "atual"
        
    }
    
    return 0;
}