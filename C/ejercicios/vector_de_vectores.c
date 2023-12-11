#include <stdio.h>
#include <stdlib.h>

#define cantcols 3
#define cantfilas 2

typedef int TvecCols[cantcols];
typedef TvecCols TvecFilas[cantfilas];

void matriz_sumada(TvecFilas m, int r[cantfilas]){
    
    int suma=0;
    int i,j;
    
    for(i=0; i<cantfilas; i++){
        r[i]=0;
        for(j=0; i<cantcols; j++){
            r[i]=r[i]+m[i][j];
        }
    }
}


void imprimir_vector(int v[cantfilas]){
    for(int i=0; i<cantfilas; i++){
        printf("%d \n",v[i]);
    }
}

int main()
{
    TvecFilas matriz_original = {{3,6,8},
                                 {5,1,9}};
    
    int vector_resultante[cantfilas];
    
    matriz_sumada(matriz_original, vector_resultante);
    imprimir_vector(vector_resultante);

    return 0;
}