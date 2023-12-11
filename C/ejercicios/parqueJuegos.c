#include <stdio.h>

int main() {
    float altura_minima = 160;    // Altura mínima permitida
    float altura_maxima = 190;    // Altura máxima permitida
    float peso_maximo_total = 1500; // Peso máximo total permitido (en kilogramos)
    int capacidad_maxima = 5;      // Capacidad máxima de participantes
    float peso_total_actual = 0;    // Peso total acumulado de los participantes
    int cantidad_participantes = 0; // Cantidad de participantes ingresados
    int continuar_ingresando = 1;
    
    printf("CAP MAX: %.1fKg  Y MAX CANTIDAD DE PERSONAS: %d\n",peso_maximo_total, capacidad_maxima);

    while (cantidad_participantes != capacidad_maxima && peso_total_actual!=peso_maximo_total && continuar_ingresando){
        
        float peso;
        float altura;
        printf("-----PARQUE DE DIVERSIONES-----\n")
        fflush(stdin);
        printf("Ingrese el peso del participante en Kg o 0 para finalizar: ");
        scanf("%f", &peso);
        
        if(peso!=0){
            fflush(stdin);
            printf("Ingrese la altura del participante en cm: ");
            scanf("%f", &altura);
        }
        
        else{
            continuar_ingresando=0;
        }
       
        if(altura<altura_minima || altura>altura_maxima){
            printf("Altura fuera de rango permitido\n");
        }
        
        if(peso_total_actual+peso >peso_maximo_total){
            printf("Peso maximo excedido\n");
        }
        
        else if (peso_total_actual+peso <=peso_maximo_total && (altura>=altura_minima && altura<=altura_maxima)){
            peso_total_actual += peso;
            cantidad_participantes++;
            printf("Peso acumulado: %.2f\n", peso_total_actual);
            printf("Personas arriba: %d\n", cantidad_participantes);
            printf("----\n");
        }
        
    }
    if(peso_total_actual==peso_maximo_total){
        printf("Peso maximo alcanzado\n");
    }
    
    if (cantidad_participantes == capacidad_maxima) {
        printf("Cantidad máxima de participantes alcanzada\n");
    }

    printf("El juego comenzará con %d participantes.\n", cantidad_participantes);

    return 0;
}
