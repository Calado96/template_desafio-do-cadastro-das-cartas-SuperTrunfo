#include <stdio.h>
int main() {
    int numero = 4, resultado;

    resultado = numero % 2; // Resto da divisão de numero por 2
    printf("A Variavel resultado é: %d\n", resultado); // Exibe o resultado do operador de resto

    if(resultado == 0) {
        printf("O número é par.\n");
    } 
    return 0;
}
