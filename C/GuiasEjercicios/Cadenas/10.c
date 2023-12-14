/******************************************************************************
10. 
Escribir un programa modular que solicite el ingreso de dos palabras y 
luego muestre las mismas según la longitud de cada una de ellas,
mostrando primero la de menor longitud.
A igualdad de longitud, mostrar primero la menor de las dos, en términos de
orden alfabético.
Las palabras tienen una longitud máxima de 15 caracteres.


*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 100
typedef char frase[15];

void mostrar_palabras(frase f1, frase f2){
    printf("%s\n%s\n", f1, f2);
}

void orden_alfabetico(frase f1, frase f2){
    
    int res=0;
    int i=0;
    bool es_menor=false;
    
    while(!es_menor){    
        if(f1[i]<f2[i]){
            mostrar_palabras(f1,f2);
            es_menor=true;
        }
        else if(f1[i]>f2[i]){
            mostrar_palabras(f2,f1);
            es_menor=true;
        }   
        i++;
    }
}

void compara_palabras(frase f1, frase f2){
    
    int largo_1 = strlen(f1); 
    int largo_2 = strlen(f2); 
    
    if(largo_1>largo_2){
        mostrar_palabras(f2,f1);
    }
    else if(largo_1<largo_2){
        mostrar_palabras(f1,f2);
    }
    else{
        orden_alfabetico(f1,f2);
    }
}


int main()
{
    frase f1 = "Hola qose";
    frase f2 = "Hola Pepi";
    
    compara_palabras(f1,f2);
    return 0;
}
