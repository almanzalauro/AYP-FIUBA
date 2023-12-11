    /*Escribir un programa que permita al usuario ingresar:
----los montos de las compras de un cliente 
----al finalizar informe por pantalla el importe total a pagar,
teniendo que cuenta que si éste supera los $1000 se le debe aplicar un 10% de descuento.

Se desconoce la cantidad de datos que se van a ingresar.
La carga de datos finaliza cuando el usuario ingresa el monto 0 (cero). 
Se debe validar que no se ingresen montos negativos.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float limite_precio=1000;
    float descuento=0.1;
    float precio;
    float total=0;
    int valor_invalido=1;
    do{
        printf("Ingrese el monto de compra: ");
        scanf("%f",&precio);
        if(precio<0){
            valor_invalido=0;
        }
        else{
            total=total+precio;

        }
    }while(precio!=0 && valor_invalido);
    
    
    if(total>limite_precio){
        printf("El descuento fue: %.2f\n",total*descuento);
        total=total-total*descuento;
    }
    printf("El total es: %.2f\n",total);

    return 0;
}