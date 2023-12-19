/*
7. 
 Leer un archivo de caracteres que representa un texto formado por
oraciones terminadas en punto. Copiarlo en otro archivo eliminando los
espacios superfluos
*/


#include <stdio.h>
#include <string.h>
void eliminar_espacios_superfluos(FILE *entrada, FILE *salida) {
    char linea[100];
    int i, j;

    while (fgets(linea, sizeof(linea), entrada) != NULL) {
        int len = strlen(linea);

        for (i = 0, j = 0; i < len; i++) {
            if (!(linea[i] == ' ' && (i < len - 1 && (linea[i + 1] == ' ' || linea[i + 1] == '\t')))) {
                linea[j++] = linea[i];
            }
        }

        linea[j] = '\0'; 
        fprintf(salida, "%s", linea);
    }
}

int main(){
	
	FILE * arEntrada,* arSalida;
	
	arEntrada = fopen("entrada.txt","rt");
	
	if(arEntrada == NULL){
		printf("No se pudo abrir el archivo de entrada\n");
	}else{
		arSalida = fopen("salida.txt", "wt");
		if(arSalida==NULL){
			printf("No se pudo abrir el archivo de salida");
			fclose(arEntrada);
		}
		else{
			eliminar_espacios_superfluos(arEntrada, arSalida);	
			fclose(arEntrada);
			fclose(arSalida);
		}
	}
	return 0;
}
