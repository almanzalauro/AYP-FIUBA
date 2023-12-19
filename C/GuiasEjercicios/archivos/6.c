/*
6) 
Se tiene un archivo de numeros telefonicos cuyos registros son de la forma:
	localidad (4 digitos)
	central (3 digitos)
	Numero (4 digitos)
Dado un numero que representa una caracteristica de localidad, listar
todos los numeros telefonicos con dicha caracteristica.
Suponer los siguientes casos:   funcion(int loc)
a) El archivo no cabe en memoria y está desordenado.
b) El archivo no cabe en memoria y está ordenado según números
telefónicos crecientes.
*/

#include <stdio.h>
#define TAM 2 

typedef struct{
	int localidad;
	int central;
	int numero;
}t_registroTelefonico;



void cargar_registros(t_registroTelefonico r[TAM], FILE *archivo){
	int i=0;
	while(i<TAM){
		printf("Ingrese el numero de localidad: ");
		scanf("%3d",&r[i].localidad);
		printf("Ingrese el numero de central: ");
		scanf("%3d",&r[i].central);
		printf("Ingrese el numero de numero: ");
		scanf("%3d",&r[i].numero);
		
		
		fwrite(&r[i], sizeof(t_registroTelefonico),1,archivo);
		printf("\n");
		i++;
	}
	
}

void mostrar_archivo(const char *archivo){
	FILE*entrada;
	t_registroTelefonico reg;
	
	entrada=fopen(archivo,"rb");
	if(entrada==NULL){
		printf("No se pudo leer el archivo\n");
	}else{
		printf("\n");
		printf("LOCALIDAD\tCENTRAL\tNUMERO\n");
		while(!feof(entrada)){
			if(fread(&reg, sizeof(t_registroTelefonico), 1, entrada)==1)
				printf("%d\t%d\t%d\n", reg.localidad, reg.central, reg.numero);
		}
		fclose(entrada);
	}
}


void filtrar_registro(int num_localidad, const char *archivo){
	FILE*entrada;
	t_registroTelefonico reg;
	
	entrada=fopen(archivo,"rb");
	if(entrada==NULL){
		printf("No se pudo leer el archivo\n");
	}else{
		printf("\n");
		printf("Los registros cuya localidad es %d son: \n", num_localidad);
		printf("LOCALIDAD\tCENTRAL\tNUMERO\n");

		while(fread(&reg, sizeof(t_registroTelefonico), 1, entrada) == 1){
			if(reg.localidad == num_localidad)
				printf("%d\t%d\t%d\n", reg.localidad, reg.central, reg.numero);			
		}
		fclose(entrada);
	}
}



int main(){
	FILE *arEntrada;
	t_registroTelefonico reg[TAM];
	int caracteristica=111;
	
	arEntrada = fopen("regTel.dat", "wb");
	if(arEntrada==NULL)
		printf("No se pudo abrir la entrada");
	else{
		cargar_registros(reg,arEntrada);
		fclose(arEntrada);
		mostrar_archivo("regTel.dat");
		filtrar_registro(caracteristica,"regTel.dat");
	}
	return 0;
}
