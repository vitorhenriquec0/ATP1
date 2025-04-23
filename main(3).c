#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    
    int num [1000];
    long long int soma = 0;
    long long int soma_par=0, soma_impar=0;
    int cont_par=0, cont_impar=0;
    double media, media_par, media_impar;
    
    srand(time(NULL));
    
    for (int i=0; i<1000; i++) {
        
        num[i] = rand();
        soma += num[i];
        
        if (num[i] % 2 == 0) {
            soma_par += num[i];
            cont_par += 1;
        }
        else {
            soma_impar += num[i];
            cont_impar += 1;
        }
    }
    
    media = soma / 1000.0;
    
    media_par = soma_par / (double)cont_par;
    media_impar = soma_impar / (double)cont_impar;
    
    printf("\nMedia dos numeros: %.2f", media);
    printf("\nMedia dos numeros pares: %.2f", media_par);
    printf("\nMedia dos numeros ímpares: %.2f", media_impar);
    printf("\nTotal de numeros pares: %d", cont_par);
    printf("\nTotal de numeros ímpares: %d", cont_impar);

    
    return 0;
}