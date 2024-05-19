#include <stdio.h>
#include <stdlib.h>

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
    int PrimerNum, SegundoNum;
    //Almacenar los datos ingresados
    // Solicitar al usuario ingresar el primer dato del rango

    int Opcion; //Menu

    do {
        do {
            printf("Ingrese el primer numero del rango (mayor o igual a 0): ");
            scanf_s("%d", &PrimerNum);
            if (PrimerNum < 0) {
                printf("El numero tiene que ser mayor o igual a 0\n");
            }
        } while (PrimerNum < 0);

        // Solicitar al usuario ingresar el segundo dato del rango
        do {
            printf("Ingrese el final del rango (mayor o igual a %d): ", PrimerNum);
            scanf_s("%d", &SegundoNum);
            if (SegundoNum < PrimerNum) {
                printf("El numero tiene que ser mayor o igual al primer dato\n");
            }
        } while (SegundoNum < PrimerNum);

        printf("Los numeros primos en el rango %d, %d son:\n", PrimerNum, SegundoNum);

        // Calcular y mostrar los números primos en el rango especificado

        for (int i = PrimerNum; i <= SegundoNum; ++i) {
            if (VerificarNumeroPrimo(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");

        printf("Quiere continuar?");
        printf("\nPresione 1 en caso de que si : ");



        scanf_s("%d", &Opcion);

        if (Opcion != 1)
            printf("Bye");
        else
            system("cls");

    } while (Opcion == 1);


    return 0;
}
