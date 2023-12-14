/******************************************************************************
8. Escribir una función en C, que reciba
una cadena que representa una palabra o una frase y devuelva si es o no un palíndromo.
Un palíndromo, es una palabra o frase que se lee igual en ambos sentidos.
Probar la función con los siguientes casos de prueba:
- anilina (Es palíndromo)
- ojo (Es palíndromo)
- radar (Es palíndromo)
- reconocer (Es palíndromo)
- amar a roma (Es palíndromo)
- ana lava lana (Es palíndromo)
- a ti no, bonita (Es palíndromo)
- algoritmos y programas (No es palíndromo)
- lenguaje C (No es palíndromo) 


*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 100
typedef char frase[MAX];

bool es_palindromo(frase f){

    bool estado = true;
    int largo = strlen(f);
    printf("largo: %i\n", largo);
    int i=0,j=largo-1;

    while(estado && j>=i){
        
        
        if(f[i]!=f[j]){
            if(f[i]==' ') {
                i++;
            }
            else if(f[j]==' '){
                j--;
            }
            else
                estado = false;
        }
        
        i++;
        j--;
    }
    return estado;
}

int main()
{
    
    frase f = "anilina";
    
    bool res = es_palindromo(f);
    printf("Es palindromo: %s\n", res ? "SI":"NO");
    return 0;
}