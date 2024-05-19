#include <stdio.h>

// Función para ver si un número es primo

int VerificarNumeroPrimo(int num) {
    if (num <= 1) {
        return 0; // No es primo
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // No es primo
        }
    }
    return 1; // Si termina sin encontrar un divisor quiere decir que es primo
}

int main() {
    
    int numPrimo = 17;
    if (VerificarNumeroPrimo(numPrimo))
        printf("El numero es primo\n");
    else
        printf("El numero no es primo");
    return 0;
}