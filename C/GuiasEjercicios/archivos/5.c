/*
5.
	Dado un archivo de apellidos y nombres, generar otro archivo con los
	mismos datos ordenados alfabéticamente.
	Suponer que el archivo de entrada cabe en memoria. 

*/

#include <stdio.h>
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
	
	entrada = fopen("entrada.dat", "rb");
	if(entrada == NULL){
		printf("No se pudo abrir el archivo de entrada");
	}
	
	else{
		for(i=0; i<TAM; i++)
			fwrite(&entrada[i], sizeof(t_persona), 1, entrada);			
	}
}

void ordenar_personas(){
	
}

void mostrar_archivo(){
	t_persona vPersona;
	FILE *entrada;
	printf("------------\n");
	entrada = fopen("entrada.dat", "rb");
	if(entrada == NULL)
		printf("No se pudo abrir");
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


int main(){
	t_persona p[TAM];
	
	FILE*entrada, *salida;
	
	cargar_personas_struct(p);
	mostrar_personas_struct(p);

	guardar_personas_archivo(p);
   	printf("\nArchivo de entrada creado\n");
   	mostrar_archivo();
   	
	
	return 0;
}







