#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x) 
2. Ingresar 2do operando (B=y) 
3. Calcular la suma (A+B) 
4. Calcular la resta (A-B) 
5. Calcular la division (A/B) 
6. Calcular la multiplicacion (A*B) 
7. Calcular el factorial (A!) 
8. Calcular todas las operaciones 
9. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte, que contenga las funciones para realizar las 4 operaciones. 
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
*/
int main(int argc, char *argv[]) {
	
	int nro1=0,nro2=0,opcion;

	// cargo menu
	do{
		opcion=menu(nro1,nro2);	
		
		switch(opcion){
			//1. Ingresar 1er operando (A=x) 
			case 1:
				printf("\nIngrese el primer numero A: ");
				scanf("%d",&nro1);
				break;
			//2. Ingresar 2do operando (B=y) 
			case 2:
				printf("\nIngrese el primer numero B: ");
				scanf("%d",&nro2);
				break;
			//3. Calcular la suma (A+B)
			default:
				imprimir(opcion,nro1,nro2);
				system("pause");
			
		}
	}while(opcion>0&&opcion<9);
	
	
	return 0;
}
