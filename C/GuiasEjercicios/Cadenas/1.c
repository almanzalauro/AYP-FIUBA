/******************************************************************************

1. Escribir una función que reciba como parámetro una cadena de caracteres y
devuelva la cantidad de dígitos numéricos que hay en la cadena. 

*******************************************************************************/
#include <stdio.h>

int cant_num_str(const char *cadena)
{
    int cant=0;
    
    for(int i=0; cadena[i]!='\0'; i++){
        if(cadena[i]>='0' && cadena[i]<='9')
            cant = cant + 1;
    }
    return cant;
}

int main()
{
    char cadena[]="Cadena 12 3car 10";
    int cant = cant_num_str(cadena);
    
    printf("El total de numero presentes es: %i\n", cant);
    
    return 0;
}
