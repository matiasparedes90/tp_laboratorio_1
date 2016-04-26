#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>
int menu(){
	int opcion;
	system("cls");
	printf("\nTRABAJO PRACTICO NRO2:\n---------------------\n\n");
	printf("\n1. Agregar una persona");
	printf("\n2. Borrar una persona");
	printf("\n3. Imprimir lista ordenada por nombre");
	printf("\n4. Imprimir graficos de edades");
	printf("\n5. Salir");
	printf("\n\nSeleccione una opcion: ");
	scanf("%d",&opcion);
	while(opcion<1||opcion>5){
		printf("\nValor no valido, intente nuevamente: ");
		scanf("%d",&opcion);
	}
	return opcion;
}

int insert(EPersonas* lista){
	int i,flag=-1;
	EPersonas aux;
	system("cls");
	printf("\nIngrese Nombre: ");
	scanf("%s",aux.nombre);
	printf("\nIngrese DNI: ");
	scanf("%d",&aux.dni);
	printf("\nIngrese edad: ");
	scanf("%d",&aux.edad);
		
	for(i=0;i<20;i++){
		if(lista[i].estado!=0){
			strcpy(lista[i].nombre,aux.nombre);
			lista[i].dni = aux.dni;
			lista[i].edad = aux.edad;
			lista[i].estado = 0;
			flag=0;
			break;
		}
	}
	
	if(flag==-1){
		printf("\n\nNo se ha podido ingresar la persona.\n\n");
		system("pause");
	}
	return flag;
}

 int dele(EPersonas* lista){
 	int aux,i,flag=-1;
 	system("cls");
 	printf("\nIngrese el ID a eliminar: ");
 	scanf("%d",&aux);
 	
 	for(i=0;i<20;i++){
 		if(lista[i].id==aux&&lista[i].estado==0){
 			lista[i].estado=1;
 			strcpy(lista[i].nombre,"");
 			lista[i].dni=0;
 			lista[i].edad=0;
 			flag=0;
 			break;
		 }
	 }
	 
	 if(flag==-1){
	 	printf("\nNo se ha podido eliminar el usuario.\n\n");
	 }else{
	 	printf("\nSe elimino el usuario.\n\n");
	 }
	 system("pause");
	 return flag;
 }
 
void imprimir(EPersonas* lista){
	int i,j;
	EPersonas aux;
	
	for(i=0;i<19;i++){
		for(j=i+1;j<20;j++){
			if(strcmp(lista[i].nombre,lista[j].nombre)>0){
				strcpy(aux.nombre,lista[i].nombre);
				aux.dni = lista[i].dni;
				aux.edad = lista[i].edad;
				aux.id = lista[i].id;
				aux.estado = lista[i].estado;
				
				strcpy(lista[i].nombre,lista[j].nombre);
				lista[i].dni = lista[j].dni;
				lista[i].edad= lista[j].edad;
				lista[i].id = lista[j].id;
				lista[i].estado = lista[j].estado;
				
				strcpy(lista[j].nombre,aux.nombre);
				lista[j].dni=aux.dni;
				lista[j].edad=aux.edad;
				lista[j].estado=aux.estado;
				lista[j].id=aux.id;
			}
		}
	}
	printf("\nID Name                EDAD    DNI       ESTADO\n");
	for(i=0;i<20;i++){
		if(lista[i].estado==0){
			printf("%2i %-20s%0i %13i %2i \n",lista[i].id,lista[i].nombre,lista[i].edad,lista[i].dni,lista[i].estado);
			
		}
	}
	system("pause");
}

 void edades(EPersonas* lista){
 	int i,j;
	Escala grafico[20];
	Escala aux;
	for(i=0;i<20;i++){
		strcpy(grafico[i].menor,"");
		strcpy(grafico[i].intermedio,"");
		strcpy(grafico[i].mayor,"");
	}
	for(i=0;i<20;i++){
		
			if(lista[i].estado==0){
				if(lista[i].edad<19){
					strcpy(grafico[i].menor,"*");
				}
				if(lista[i].edad>18&&lista[i].edad<36){
					strcpy(grafico[i].intermedio,"*");
				}
				if(lista[i].edad>35){
					strcpy(grafico[i].mayor,"*");
				}
			}
		
	}/*
	for(i=0;i<19;i++){
		for(j=i+1;j<20;j++){
			if(strlen(grafico[j].menor)==0&&strcmp(grafico[i].menor,"*")==0){
				strcpy(aux.menor,grafico[i].menor);
				strcpy(grafico[i].menor,"");
				strcpy(grafico[j].menor,aux.menor);
			}
			if(strlen(grafico[j].intermedio)==0&&strcmp(grafico[i].intermedio,"*")==0){
				strcpy(aux.intermedio,grafico[i].intermedio);
				strcpy(grafico[i].intermedio,"");
				strcpy(grafico[j].intermedio,aux.intermedio);
			}
		}
	}*/
	for(i=0;i<20;i++){
		printf(" %s ",grafico[i].menor);	
		printf(" %s ",grafico[i].intermedio);
		printf(" %s \n",grafico[i].mayor);
	}
	  
	 printf("\n<18 19-35 >35\n");
	 system("pause");
 }
