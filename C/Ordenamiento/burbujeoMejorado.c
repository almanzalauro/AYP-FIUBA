/*
iDENTIFICAR CUANDO HAY O NO UN INTERCAMBIO (BOOL) 
*/
#include <stdio.h>
#include <stdbool.h>

void ordenar(int vector[], int n) {
    bool intercambio = true;
    int i, temp;
    int iteraciones = 0;

    while (intercambio) {
        intercambio = false;

        for (i = 0; i < n - 1; i++) {
            if (vector[i] > vector[i + 1]) {
                // Intercambiar los elementos si están en el orden incorrecto
                temp = vector[i];
                vector[i] = vector[i + 1];
                vector[i + 1] = temp;
                intercambio = true;
            }
        }
        n--; // Reducir el tamaño del arreglo en cada iteración, ya que el elemento más grande ya está en su lugar correcto
    }
}


int main() {
    int numeros[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    printf("Arreglo original:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }

    ordenar(numeros, n);

    printf("\nArreglo ordenado en orden ascendente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}