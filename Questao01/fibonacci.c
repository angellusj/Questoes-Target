#include <stdio.h>
#include <locale.h>

int CalculoFibonacci(int fibonacci){
    int numero1 = 0, numero2 = 1, numero3 = 0;
    
    if (fibonacci == 0 || fibonacci == 1) {
        return 1; 
    }
    
    while (numero3 < fibonacci) {
        numero3 = numero1 + numero2;
        numero1 = numero2;
        numero2 = numero3;
    }
    
    return (numero3 == fibonacci);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero = 0;

    printf("Digite um número: \n");
    scanf("%d", &numero);

    if(CalculoFibonacci(numero)){
        printf("O número %d pertence a sequencia de Fibonacci. \n", numero);
    } else {
        printf("O número %d não pertence a sequência de Fibonacci. \n", numero);
    }

    return 0;
}