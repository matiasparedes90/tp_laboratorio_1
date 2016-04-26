#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcion;
	int i;
	EPersonas registros[MAX];
	for(i=0;i<20;i++){
		registros[i].estado = 1; // 1 = inactivo / 0 = activo
		registros[i].id = i+1;
	}
	do{
	
	opcion=menu();
	
	switch(opcion){
		case 1:
			insert(registros);
			break;
		case 2:
			dele(registros);
			break;
		case 3:
			imprimir(registros);
			break;
		case 4:
			edades(registros);
			break;
	}
	}while(opcion>0&&opcion<5);
	return 0;
}
