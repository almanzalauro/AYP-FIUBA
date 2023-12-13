/******************************************************************************

2. Escribir una función que reciba como parámetro una cadena de caracteres y
devuelva la cantidad de caracteres no alfabéticos que hay en la cadena.
No tener en cuenta la ñ, ni las vocales acentuadas. 

NOTA: ME CUENTA LAS TILDES COMO CARACTERES APARTE, TAMBIEN PARA EL SIGNO DE PREGUNTA ¿.
*******************************************************************************/
#include <stdio.h>


void es_alfabetico(const char *c, int *cantidad)
{
    *cantidad=0;
    
    for(int i=0; c[i]!='\0'; i++){
        if(!((c[i]>='A' && c[i]<='Z') || (c[i]>='a' && c[i]<='z')))
            *cantidad = *cantidad + 1;
    }
}

int main()
{
    char cadena[]="Hola como estas?";
    int cant=0;
    es_alfabetico(cadena, &cant);
    
    printf("El total de numero no alfabeticos es: %i\n", cant);
    
    return 0;
}