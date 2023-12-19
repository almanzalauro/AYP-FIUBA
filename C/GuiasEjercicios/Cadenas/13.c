/******************************************************************************
13.
Escribir un programa modular en C, que solicite el ingreso de 3 oraciones, de
no más de 50 caracteres cada una.
Luego informar:
1. Cuál es la oración más larga.
2. Si hay al menos 2 oraciones iguales.
3. Solicitar el ingreso de una palabra o parte de una oración, e indicar si la
misma se encuentra en las oraciones, y en cuales. 


*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 50

typedef char frase[MAX];

void leer_cadena(frase f1, frase f2, frase f3){
    printf("Cadena 1: ");
    fgets(f1,MAX,stdin);
    fflush(stdin);
    
    printf("Cadena 2: ");
    fgets(f2,MAX,stdin);
    fflush(stdin);
    
    printf("Cadena 3: ");
    fgets(f3,MAX,stdin);
    fflush(stdin);
}

int compara_cadenas(frase f1, frase f2, frase f3){
    int largo_1 = strlen(f1);
    int largo_2 = strlen(f2); 
    int largo_3 = strlen(f3);
    int res = 0;
    
    if(largo_1>largo_2 && largo_1>=largo_3){
        res = 1;
    }else if(largo_2>=largo_1 && largo_2>=largo_3){
        res = 2;
    }else{
        res = 3;
    }
    
    return res;
}

void buscar_sub_cadena(frase f1, frase f2, frase f3, frase sub){

    char *res;
    if(strstr(f1,sub)!=NULL){
        res=strstr(f1,sub);
    }else if(strstr(f2,sub)!=NULL){
        res=strstr(f2,sub);
    }else if(strstr(f3,sub)!=NULL){
        res=strstr(f3,sub);
    }else{
        res=NULL;
    }
    printf("Subcadena: %s\n", res!=NULL ? res : "no encontrada");
}

int main()
{
   
    frase f1,f2,f3;
    frase sub = "como";
    int res;
    
    leer_cadena(f1,f2,f3);
    
    res=compara_cadenas(f1,f2,f3);
    printf("La cadena mas larga es: %s\n",res==1 ? f1 : res==2 ? f2 : f3);
    
    buscar_sub_cadena(f1,f2,f3,sub);
    return 0;
}
