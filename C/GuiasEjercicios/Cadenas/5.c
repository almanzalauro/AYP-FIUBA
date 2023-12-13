/******************************************************************************

5. Escribir una función para validar una nueva clave de acceso.
La función deberá recibir una cadena de caracteres, que contendrá la clave
candidata, que ya fue ingresada previamente por el usuario.
Devolverá true o false, dependiendo de si cumple o no, con las siguientes
condiciones:
    - La clave debe estar formada únicamente por, entre 6 y 12 caracteres
    numéricos
    - La cantidad de dígitos pares debe ser mayor a la de los impares.
    A los sumo debe recorrer una vez la cadena.
Evite realizar ciclos innecesarios.
Compruebe el correcto funcionamiento, incluyendo los siguientes casos de
prueba:
    validar("j20893") devuevle false
    validar("20893a") devuevle false
    validar("208X930") devuevle false
    validar("20201") devuelve false
    validar("23445776") devuelve false
    validar("089010") devuelve true
    validar("02784532132567") devuelve false
    validar("027845320011") devuelve true 
*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef char t_cadena[100];

bool validar(t_cadena c){
    bool estado = true;
    bool es_num = true;
    int i=0;
    int dig = 0;
    int cant_par=0;
    int cant_impar=0;
    
    while(c[i]!='\0')
    {
        if(c[i]>='0' && c[i]<='9')
            dig++;
        else
            es_num = false;
            
        if(c[i]%2==0)
            cant_par++;
        
        else
            cant_impar++;
        
        i++;
    }
    
    if((cant_par>cant_impar)&&(dig>=6&&dig<=12) && es_num)
        estado = true;
    
    else
        estado=false;
        
    return estado;
}


int main() {
    t_cadena cadena1 = "aj20893";
    t_cadena cadena2 = "20893a"; 
    t_cadena cadena3 = "208X930";
    t_cadena cadena4 = "20201";
    t_cadena cadena5 = "23445776";
    t_cadena cadena6 = "089010";
    t_cadena cadena7 = "02784532132567";
    t_cadena cadena8 = "a02785320011";
    

    printf("Resultado 1: %i\n", validar(cadena1));  // Debería devolver 0
    printf("Resultado 2: %d\n", validar(cadena2));  // Debería devolver 0
    printf("Resultado 3: %d\n", validar(cadena3));  // Debería devolver 0
    printf("Resultado 4: %d\n", validar(cadena4));  // Debería devolver 0
    printf("Resultado 5: %d\n", validar(cadena5));  // Debería devolver 0
    printf("Resultado 5: %d\n", validar(cadena6));  // Debería devolver 1
    printf("Resultado 5: %d\n", validar(cadena7));  // Debería devolver 0
    printf("Resultado 5: %d\n", validar(cadena8));  // Debería devolver 1

    return 0;
}
