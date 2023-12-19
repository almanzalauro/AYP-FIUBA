/******************************************************************************

1) Dado un archivo de números enteros mayores o iguales que 0, generar otro
archivo que almacene los factoriales de cada número del registro
correspondiente del archivo de entrada

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int calcular_factorial(const int n) {
  int res;
  if (n == 0 || n == 1) {
    return 1;
  } else
    return n * calcular_factorial(n - 1);
}

int main(void) {

  FILE *archivo;
  FILE *salida;
  int factorial, numero;

  archivo = fopen("numeros.txt", "r");
  if (archivo == NULL) {
    printf("Error al abrir el archivo de entrada\n");
    return 1;
  }

  salida = fopen("salida.txt", "wt");
  if (salida == NULL) {
    printf("Error al abrir el archivo de salida\n");
    return 1;
  }

  while (fscanf(archivo, "%d", &numero) == 1) {
    factorial = calcular_factorial(numero);
    fprintf(salida, "%d\n", factorial);
  }

  fclose(archivo);
  fclose(salida);

  printf("Factoriales calculados y escritos correctamente.\n");

  return 0;
}
