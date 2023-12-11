/*
Dada las siguientes declaraciones de constantes y tipos:
    #define MAX 100
    typedef int Tvector[MAX];
Desarrollar una funcion en lenguaje C que reciba como parámetros un vector de tipo Tvector ya cargado
con datos que se encuentran en ORDEN ASCENDENTE, su maximo lógico y un numero entero que debe ser intercalado en el vector,
de modo que siga ordenado. Se espera que la función devuelva al modulo invocante 1 si pudo realizar lo solicitado
y 0 si no pudo hacerlo. 
Tanto el vector como el maximo logico actualizados deben devolverse sobre los parametros que se recibieron.
*/


#include <stdio.h>
#define MAX 7

typedef int Tvector[MAX];

int ejercicio_2(Tvector v, int*ml, int num){
    int i, aux = num;
    if(*ml + 1 > MAX){
        return 0;
    }
    
    else{
        for( i=0; i<*ml; i++){
            if(num>v[i] && num<v[i+1]){
                aux=v[i+1];
                v[i+1]=num;
                num=aux;
            }
        }
        *ml=*ml + 1;
        v[i]=aux;
        return 1;
    }
}

void imprimir_vector(Tvector v, int ml){
    for(int i=0; i<ml; i++){
        printf("%d\t",v[i]);
    }
}

int main()
{
    
    Tvector vector={1,4,10,13,30,34};
    int ml=6;
    int numero=31;
    
    imprimir_vector(vector, ml);
    
    printf("\n");
    
    int res = ejercicio_2(vector,&ml,numero);
    
    if(res==1){
        imprimir_vector(vector, ml);
    }
    else 
        printf("El maximo logico ya alcanzó su limite.");
    return 0;
}
