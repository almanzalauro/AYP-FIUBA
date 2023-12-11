// Escribir una función, que reciba como primer parámetro un arreglo unidimensional (vector) de valores enteros y como segundo parámetro, la cantidad de valores a recorrer (ML) ó la última posición en el arreglo; y devuelva el valor más alto que hay en el arreglo.

// Suponga que el arreglo como máximo podrá almacenar hasta 10 valores.

// Declare un tipo y máximo físico adecuado.

// Para probar su función, incluya los siguientes casos de prueba, con la correspondiente invocación, e imprima lo que devuelve la función.

// vec_1 = {8, -4, 7, 8, 0}
// vec_2 = { -4, -7, -10}
// vec_3 = { 425, -70, 500, 2, 43, 12, -1}

#include <stdio.h>
#define MF 10

typedef int vector[MF];

int max_valor(vector v, int longitud){
    int max = v[0];
    
    for(int i=1; i<= longitud; i++){
        if(v[i]>=max){
            max=v[i];
        }
    }
    return max;
}

int main()
{
    vector vec_1 = {8, -4, 7, 8, 0};
    vector vec_2 = { -4, -7, -10};
    vector vec_3 = { 425, -70, 500, 2, 43, 12, -1};
    
    int *p=vec_2;
    printf("%zu\n", sizeof(p) / sizeof(p[0]));
    
    printf("El valor maximo es: %d\n",max_valor(vec_1,sizeof(vec_1) / sizeof(vec_1[0])));
    printf("El valor maximo es: %d\n",max_valor(vec_2,sizeof(vec_2) / sizeof(vec_2[0])));
    printf("El valor maximo es: %d\n",max_valor(vec_2,sizeof(p) / sizeof(p[0])));
    printf("El valor maximo es: %d\n",max_valor(vec_3,sizeof(vec_3) / sizeof(vec_3[0])));
    return 0;
}

/*Usar un puntero a vec_2 puedo especificar la longitud real de vec_2 en max_valor, si paso vec_2 directamente, la longitud sera de 10, en cambio usando un puntero este solo será de longitud 2!*/