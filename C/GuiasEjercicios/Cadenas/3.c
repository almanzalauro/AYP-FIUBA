/******************************************************************************

3. Escribir una función en C, que reciba como parámetro:
    una cadena de tipo t_cadena, 
    y devuelva la cantidad de palabras que hay en la cadena.

Considerar que una palabra está separada de otra, por uno ó más blancos.
No recorrer la cadena más de una vez.

Declare un tipo t_cadena acorde.

Escribir el programa que incluya a la función y las invocaciones con los
siguientes caso de prueba:

cant_palabras("El sol es amarillo.")            -> devuevle 4
cant_palabras(" Hoy es 30 de Junio de 2021 ")   -> devuevle 7
cant_palabras("30/06/2021")                     -> devuelve 1
cant_palabras("El precio es $2.000.- ")         -> devuelve 4
cant_palabras(" ")                              -> devuelve 0 

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

typedef char t_cadena[100];  

int cant_palabras(const t_cadena cadena) {
    int contador = 0;
    bool esPalabra = false;

    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == ' ' || cadena[i] == '\t') {
            esPalabra = false;
            
        } else {
            if (!esPalabra) {
                contador++;
                esPalabra = true;
            }
        }
    }

    return contador;
}

int main() {
    t_cadena cadena1 = "El sol es amarillo.";
    t_cadena cadena2 = " Hoy es 30 de Junio de 2021 ";
    t_cadena cadena3 = "30/06/2021";
    t_cadena cadena4 = "El precio es $2.000.- ";
    t_cadena cadena5 = " ";

    printf("Resultado 1: %d\n", cant_palabras(cadena1));  // Debería devolver 4
    printf("Resultado 2: %d\n", cant_palabras(cadena2));  // Debería devolver 7
    printf("Resultado 3: %d\n", cant_palabras(cadena3));  // Debería devolver 1
    printf("Resultado 4: %d\n", cant_palabras(cadena4));  // Debería devolver 4
    printf("Resultado 5: %d\n", cant_palabras(cadena5));  // Debería devolver 0

    return 0;
}