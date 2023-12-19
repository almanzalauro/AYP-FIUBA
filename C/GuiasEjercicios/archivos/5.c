/*
5.
	Dado un archivo de apellidos y nombres, generar otro archivo con los
	mismos datos ordenados alfabéticamente.
	Suponer que el archivo de entrada cabe en memoria. 

*/

#include <stdio.h>
#include <string.h>
#define MAX 30
#define TAM 2

typedef struct{
	char nombre[MAX];
	char apellido[MAX];	
}t_persona;



void cargar_personas_struct(t_persona p[TAM]){

	int i;
	
	for(i=0; i<TAM; i++)	
	{
		printf("Ingrese el nombre de la persona: ");
		scanf("%s",p[i].nombre);
		fflush(stdin);
		printf("Ingrese el apellido de la persona: ");
		scanf("%s",p[i].apellido);
		fflush(stdin);
	}
}

void mostrar_personas_struct(t_persona vPersona[TAM]){

	int i;
	printf("\nNOMBRE\t\tAPELLIDO\n");
	
	for(i=0; i<TAM; i++)
		printf("%s\t\t%s\n",vPersona[i].nombre, vPersona[i].apellido);
		
	printf("\n");
}

void guardar_personas_archivo(t_persona vPersona[TAM]){
	FILE *entrada;
	int i;
	
	entrada = fopen("entrada.dat", "wb");
	if(entrada == NULL){
		printf("No se pudo abrir el archivo de entrada");
	}
	
	else{
		for(i=0; i<TAM; i++)
			fwrite(&entrada[i], sizeof(t_persona), 1, entrada);			
	}
	printf("\nArchivo de entrada creado\n");

}


void mostrar_archivo(){
	t_persona vPersona;
	FILE *entrada;
	printf("------------\n");
	entrada = fopen("entrada.dat", "rb");
	if(entrada == NULL)
		printf("No se pudo abrir el archivo de entrada");
	else{
		fread(&vPersona, sizeof(vPersona),1,entrada);
		printf("NOMBRE \tAPELLIDO\n");
		while(!feof(entrada)){
			printf("\n%s\t%-30s",vPersona.nombre, vPersona.apellido);
			fread(&vPersona, sizeof(vPersona),1 ,entrada);
		}
		fclose(entrada);
	}
	
	return;
}

void ordenar_archivo(FILE* entrada, FILE* salida) {
    t_persona aux,persona, vecPersonas[TAM];
    int i=0,j;
    
    fread(&persona, sizeof(t_persona), 1, entrada);
	   
    while (!feof(entrada)) {
        strcpy(vecPersonas[i].nombre, persona.nombre);
        strcpy(vecPersonas[i].apellido, persona.apellido);

    	fread(&persona, sizeof(t_persona), 1, entrada);
        i++;
    }
    
    for(i=1; i<TAM; i++){ //ciclo de n-1 iteraciones
	    for(j=0; j<TAM-i; j++){ // "burbujeo" del mayor valor
			if(strcmp(vecPersonas[j].apellido, vecPersonas[j+1].apellido) > 0) {
		         aux=vecPersonas[j];
		         vecPersonas[j]=vecPersonas[j+1];
		         vecPersonas[j+1]=aux;
	       }
	    }
	  }
    printf("\n");
    for(i=0; i<TAM; i++)
    	printf("Usuario: %s\t%s\n", vecPersonas[i].nombre,vecPersonas[i].apellido);
    
}

int main(){
	t_persona p[TAM];
	
	FILE*entrada, *salida;
	
	cargar_personas_struct(p);
	/*mostrar_personas_struct(p);*/
	
	guardar_personas_archivo(p);
   	mostrar_archivo();
   	
   	entrada=fopen("entrada.dat", "rb");
   	salida=fopen("salida.dat", "wb");
 	if(entrada == NULL || salida == NULL){
 		printf("Error al abrir archivo\n");
	 }  	
	 else{
	 	ordenar_archivo(entrada,salida);
	 	fclose(entrada);
	 	fclose(salida);
	 }
	
	return 0;
}







