/******************************************************************************

1) Dado un archivo de números enteros mayores o iguales que 0, generar otro
archivo que almacene los factoriales de cada número del registro
correspondiente del archivo de entrada

*******************************************************************************/
#include <stdio.h>

typedef struct {
  int codigo;
  char descripcion[30];
  float cantidad;
} t_regProducto;

void cargar_datos(FILE *arProductos) {
  t_regProducto rProducto;

  printf("Codigo de Artículo: ");
  scanf("%d", &rProducto.codigo);
  fflush(stdin);

  while (rProducto.codigo != 0) {
    printf("Descripcion: ");
    scanf("%30[^\n]", rProducto.descripcion);
    fflush(stdin);

    printf("Cantidad en stock: ");
    scanf("%f", &rProducto.cantidad);
    fflush(stdin);

    fwrite(&rProducto, sizeof(rProducto), 1, arProductos);

    printf("\nCodigo de Articulo: ");
    scanf("%d", &rProducto.codigo);
    fflush(stdin);
  }
}

int main() {
  FILE *arProductos;
  arProductos = fopen("productos.dat", "wb");

  if (arProductos == NULL)
    printf("No se pudo crear el archivo\n");
  else {
    cargar_datos(arProductos);
    fclose(arProductos);
  }
  return 0;
}
