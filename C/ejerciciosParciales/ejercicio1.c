/*Solicitar ingreso de valores que representan una cantidad de segundos.
El programa informará al usuario el equivalente a dias, horas, minutos y segundos.
Validar que el valor ingresado sea entero y positivo de lo contrario mostrar 
"Valor ingresado invalido".
El ingreso finaliza cuando se ingresa el valor: 0*/

#include <stdio.h>
#define LMAX 5

typedef int v_result[LMAX];

void cargar_valor(v_result v,size_t lm){
    printf("Ingrese el valor en segundos: ");
    scanf("%d",&v[0]);
    if(v[0]<=0){
        printf("Valor ingresado invalido\n");
        fflush(stdin);
        v[0]=0;
    }
    else{
        for(int i=1; i<lm;i++){
            v[i]=0;
        }
    }
}

void imprimir_resul(v_result v, size_t lm){
    printf("---Resultados: \n");
    printf("Segundos: %d\n", v[0]);
    printf("Dias: %d\n",v[1]);
    printf("Horas: %d\n",v[2]);
    printf("Minutos: %d\n",v[3]);
    printf("Segundos: %d\n",v[4]);
}

void conver_seg(v_result v){
    float operacion = (float)v[0]/86400.0;
    int dias=(int)operacion;
    operacion=(operacion-dias)*24.0;
    int horas=(int)operacion;
    operacion=(operacion-horas)*60.0;
    int minutos=(int)operacion;
    operacion=(operacion-minutos)*60.0;
    int segundos = (int) operacion;
    
    v[1]=dias;
    v[2]=horas;
    v[3]=minutos;
    v[4]=segundos;
}

int main()
{
    v_result v;
    cargar_valor(v,LMAX);
    conver_seg(v);
    imprimir_resul(v,LMAX);
    return 0;
}