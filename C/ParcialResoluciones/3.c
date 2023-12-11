/*
Dada las siguientes declaraciones de constantes y tipos:
    #define CANT 15
    typedef int Tmatriz[CANT][CANT];
Desarrollar una funcion en lenguaje C que reciba como parámetros una matriz cuadrada ya cargada
y un numero entero, que devuelva al modulo invoante la cantidad de elementos presentes en su 
diagonal secundaria que son divisibles por el numero recibido.
*/

#include <stdio.h>
#define CANT 3
typedef int Tmatriz[CANT][CANT];

void ejercicio_3(Tmatriz m, int lf, int num, int*res){
    *res=0;
    
    for(int i=0; i<lf; i++){
        for(int j=0; j<lf; j++ )
        if(i+j == lf-1 && m[i][j]%num==0)
            *res = *res + 1;
    }
}

void imprimir_matriz(Tmatriz m, int lf){
    for(int i=0; i<lf; i++){
        for(int j=0; j<lf; j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    
    Tmatriz mCuadrada={{1,18,36},{31,2142,4},{9,3,10}};
    int cantidad,numero=3;
    
    imprimir_matriz(mCuadrada,CANT);
    ejercicio_3(mCuadrada, CANT, numero,&cantidad);
    printf("la cantidad de num divisibles por: %d es: %d",numero,cantidad);
    return 0;
}