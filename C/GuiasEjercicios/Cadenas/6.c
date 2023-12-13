/******************************************************************************
Escribir una función para validar una nueva clave de acceso.
La función deberá recibir una cadena de caracteres, que contendrá la clave
candidata, ingresada previamente por el usuario.
Devolverá true o false, dependiendo de si cumple o no con las siguientes
condiciones:
- La clave debe estar formada únicamente por, entre 4 y 8 caracteres numéricos
- Los caracteres no pueden ser todos iguales
Ejemplos:
validar("j2020") devuevle false
validar("2021a") devuevle false
validar("20X21") devuevle false
validar("2220") devuelve true
validar("23445776") devuelve true
validar("089") devuelve false
validar("027845321") devuelve false
validar("02784532") devuelve true
validar("33333") devuelve false

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef char t_cadena[100];

bool validar(t_cadena c){
    bool cumple_condicion = true;
    bool son_distintos = true;
    
    int i=0;
    int dig = 0;
    int cant_par=0;
    int cant_impar=0;
    
    while(c[i]!='\0' && cumple_condicion)
    {
        char aux = c[i+1];
        if(!(c[i]>='0' && c[i]<='9'))
            cumple_condicion = false;
        
        else{
            if(aux==c[i])
            {
                son_distintos = false;
                printf("c[%i]: %c  c[%i]: %c \t",i,c[i],i,aux);
                
            }
            dig++;
        }
        i++;
        printf("\n");
    }
    
    printf("dig: %i\t", dig);
    
    if((dig>=4 && dig<=8) && son_distintos)
        cumple_condicion = true;
    
    else
        cumple_condicion=false;
        
    return cumple_condicion;
}


int main() {
     t_cadena cadena1 = "j2020";
    t_cadena cadena2 = "2021a"; 
    t_cadena cadena3 = "20X21";
    t_cadena cadena4 = "2220";
    t_cadena cadena5 = "23445776";
    t_cadena cadena6 = "089";
    t_cadena cadena7 = "027845321";
    t_cadena cadena8 = "02784532";
    t_cadena cadena9 = "33333";

    // Casos de prueba
    printf("Resultado 1: %d\n", validar(cadena1));  
    printf("Resultado 2: %d\n", validar(cadena2)); 
    printf("Resultado 3: %d\n", validar(cadena3));  
    printf("Resultado 4: %d\n", validar(cadena4));  
    printf("Resultado 5: %d\n", validar(cadena5));  
    printf("Resultado 6: %d\n", validar(cadena6));  
    printf("Resultado 7: %d\n", validar(cadena7));  
    printf("Resultado 8: %d\n", validar(cadena8));  
    printf("Resultado 9: %d\n", validar(cadena9));  


    return 0;
}

