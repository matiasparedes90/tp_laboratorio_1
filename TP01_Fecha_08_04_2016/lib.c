
int menu(int nr1, int nr2){
	int valor;
	system("cls");
	printf("\nMENU:\n----\n\n1. Ingresar 1er operando (A=%d) \n2. Ingresar 2do operando (B=%d)\n3. Calcular la suma (A+B) \n4. Calcular la resta (A-B) \n5. Calcular la division (A/B) \n6. Calcular la multiplicacion (A*B)\n7. Calcular el factorial (A!) \n8. Calcular todas las operaciones \n9. Salir\n\nElija una opcion: ",nr1,nr2);
	scanf("%d",&valor);
	// valido que la opcion seleccionada este en el rango de 1 a 9
	while(valor<1||valor>9){
		printf("\nError, intente nuevamente: ");
		scanf("%d",&valor);
	}
	
	return valor;
}
//Calcular la suma (A+B) 
int suma(int nr1, int nr2){
	int resultado;
	resultado=nr1+nr2;
	return resultado;
}
//Calcular la resta (A-B) 
int restar(int nr1, int nr2){
	int resultado;
	resultado=nr1-nr2;
	return resultado;
}
//Calcular la division (A/B) 
float dividir(int nr1, int nr2){
	float resultado,newnro1,newnro2;
	newnro1=nr1;
	newnro2=nr2;
	resultado=newnro1/newnro2;
	return resultado;
}
//Calcular la multiplicacion (A*B) 
int multiplicacion(int nr1, int nr2){
	int resultado;
	resultado=nr1*nr2;
	return resultado;
}
//Calcular el factorial (A!) 
int factorial(int nr1){
	int resultado;
	
	if(nr1!=1){
		resultado=nr1*factorial(nr1-1);
	}else{
		resultado=1;
	}
	
	return resultado;
}
//Calcular todas las operaciones 
void calcular(int nr1, int nr2){
	int resultado;
	float resultadodivision;
	imprimir(3,nr1,nr2);
	imprimir(4,nr1,nr2);
	imprimir(5,nr1,nr2);
	imprimir(6,nr1,nr2);
	imprimir(7,nr1,nr2);
	
	
}
// Esta funcion muestra el resultado de todas las operaciones mediante la opcion que se seleccione
void imprimir(int opcion, int nr1,int nr2){
	int resultado;
	float resultadofloat;
	switch(opcion){
		case 3:
			resultado=suma(nr1,nr2);
			printf("\nLa suma es %d\n",resultado);
			break;
		case 4:
			resultado=restar(nr1,nr2);
			printf("\nLa resta es %d\n",resultado);
			break;
		case 5:
			if(nr2==0){
				printf("\nNo se puede dividir por 0\n\n");
				return;
			}
			resultadofloat=dividir(nr1,nr2);
			printf("\nLa division es %f\n",resultadofloat);
			break;
		case 6:
			resultado=multiplicacion(nr1,nr2);
			printf("\nLa multiplicacion es %d\n",resultado);
			break;
		case 7:
			resultado=factorial(nr1);
			printf("\nEl factorial del nro A es %d\n",resultado);
			
			break;
		case 8:
				calcular(nr1,nr2);
			break;	
		

	}

};
