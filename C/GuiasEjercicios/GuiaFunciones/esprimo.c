/*Escribir una función que reciba un número y devuelva un valor booleano
indicando si el número recibido es ó no primo. Si desconoce como devolver un
valor booleano, puede devolver 0, en caso de No ser primo; y 1, si lo es.*/

#include <stdio.h>

int es_primo(int num){
    int i, contador=0;
    
    for(i=2;i<=num; i++){
        if(num%i==0){
            contador++;
        }
    }
    return (contador>2? 0:1);    
}

int main()
{
    int num;
    int resultado;
    
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    resultado=es_primo(num);
    
    printf("%d\n",resultado=0? 0:1);
    return 0;
}
