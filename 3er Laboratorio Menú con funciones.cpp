//Definici�n de Bibliotecas.
#include <iostream>	//header.
#include <math.h> //Biblioteca para operaciones matem�ticas.
using namespace std; //El espacio de nombres standard.

//Definici�n de variables flotantes.
float num1, num2;	
float resultado;

//Prototipos de las funciones flotantes con los par�metros de las variables flotantes.
float suma(float num1, float num2);
float resta(float num1, float num2);
float multi(float num1, float num2);
float division(float num1, float num2);

//**************************************CALCULADORA************************************************
int calculadora()
{
	system("cls");	//Limpia la pantalla 
	cout << "---- BIENVENIDO A LA CALCULADORA ----\n";	//Imprime en pantalla.
	cout << "Ingrese el primer numero: " << endl;	//Pedir los datos.
	cin >> num1;	//Variable que almacena los datos.
	cout << "Ingrese el segundo numero: " << endl;
	cin >> num2;
	//Impresi�n del resultado invocando a la funci�n con los par�metros de regreso.
	cout << "El resultado de la suma es: " << suma(num1, num2) << endl;	
	cout << "El resultado de la resta es: " << resta(num1, num2) << endl;
	cout << "El resultado de la multiplicacion es: " << multi(num1, num2) << endl;
	cout << "El resultado de la division es: " << division(num1, num2) << endl;
	return 0;	//Al ser una funci�n retornar� 1 valor.
}

//******************************************SUMA**********************************************
float suma(float num1, float num2){	//Funci�n con los par�metros de variables.
	resultado = num1 + num2;	//operaci�n matem�tica.
	return resultado;	//Valor que retornar� a la funci�n principal (calculadora).
}

//*****************************************RESTA**********************************************
float resta(float num1, float num2){	//Funci�n con los par�metros de variables.
	resultado = num2 - num1;	//operaci�n matem�tica.
	return resultado;	//Valor que retornar� a la funci�n principal (calculadora).
}

//************************************MULTIPLICACI�N******************************************
float multi(float num1, float num2){	//Funci�n con los par�metros de variables.
	resultado = num1 * num2;	//operaci�n matem�tica.
	return resultado;	//Valor que retornar� a la funci�n principal (calculadora).
}

//***********************************DIVISI�N*************************************************
float division(float num1, float num2){	//Funci�n con los par�metros de variables.
	resultado = num2 / num1;	//operaci�n matem�tica.
	return resultado;	//Valor que retornar� a la funci�n principal (calculadora).
}

//**********************************CALCULAR POTENCIA*****************************************
float calcularPotencia(int B, int E){	//Funci�n con los par�metros de los datos ingresados por el usuario.
	double res = 1;	//Declaraci�n e inicializaci�n de la variable res en 1, esto se inicializa en 1 ya que si se coloca 0, el resultado siempre ser� 0.  		
	
	if(E > 0)	//Condici�n que evalua si el exponente es mayor a 0.
   	{
   		for (int i = 0; i < E; i++)	//Ciclo FOR de la variable i = 0, incrementar hasta que i sea menor que el exponente ingresado por el usuario.
		   res *= B;	//multiplicaci�n de la variable res = 1, por la base ingresada por el usuario.
	}
	else if(E < 0)	//Condici�n que evalua en caso que el exponente sea menor a 0.
	{
		for (int i = 0; i > E; i--)	//Ciclo FOR de la variable i = 0, decrementar hasta que i sea mnayor que el exponente ingresado por el usuario.
			res *= B;	//multiplicaci�n de la variable res = 1, por la base ingresada por el usuario.
		res = 1/res;	//Dividir 1 dentro del la variable res = 1.
	}
	return res;	//Retornar el resultado al main.
}

//********************************ESPRIMO*****************************************************
int esPrimo(int num){	//Funci�n con el par�metro de la variable del n�mero ingresado.
	bool primo = true;	//Declaraci�n de una variable de tipo booleano.
	for (int i = 2; i < num; i++){	//Ciclo FOR de la variable i = 2, incrementar i hasta que i sea menor que el n�mero ingresado por el usuario. 
		if(num % i == 0) primo = false;	//Condici�n que explica si el n�mero ingresado al dividirse por el dato de i, si es igual a cero, entonces el n�mero no ser� primo. 
	}	
	if (primo == true) //Condici�n en caso de que el n�mero sea primo.
		cout << "el numero es primo." << endl;	//Imprimir resultados. 
	else 	//Sino.
		cout << "el numero no es primo." << endl;	
	return num;	//Retornar el resultado al main.
}

//********************************ESBISIESTO***************************************************
int esBisiesto(int anio){	//Funci�n con el par�metro de la variable del a�o ingresado.
	if (anio % 4 != 0 || (anio % 100 == 0 && anio % 400 != 0)) //Si el a�o no es m�ltiplo de 4 no es bisiesto. (Otra opci�n), pero (0R) si el a�o es m�ltiplo de 100 no es bisiesto a menos que sea de 400, es bisiesto. 
		cout << "\nEste anio no es bisiesto" << endl;	//Imprimir resultados. 
	else	//Sino.
		cout << "\nEste anio es bisiesto" << endl;
	return anio; //Retornar el resultado al main.	
}

//**********************************MAIN********************************************************
int main()	//Funci�n principal.
{
	//Declaraci�n de variables.
	int opcion;
	char resp;
	resp = 's';
	do	//Ciclo Do-While (Hacer-Mientras).
	{
		//Men� de Opciones.
		system("cls");
		cout << "---- BIENVENIDO A MI PROGRAMA ----\n";
		cout << "1 - Calculadora (Operadores y Variables)\n";
		cout << "2 - Potencias (Funciones)\n";
		cout << "3 - Determinar numeros primos\n";
		cout << "4 - Verificar un anio bisiesto\n";
		cout << "5 - Finalizar\n";
		
		cout << "Ingrese su opcion:";
		cin >> opcion;
		switch (opcion) //Men�
		{
			//Casos, cada opci�n hace un llamado o invocaci�n a la funci�n.
			case 1:calculadora();
				   break;	//Corte.
			case 2:float calcularPotencia(int base, int exp);	//Llamado a la funci�n, enviando par�metros.
					int base, exp;	//Declaraci�n de variables.
					system("cls");	//Limpia la pantalla.
					cout << "---- CALCULADORA DE POTENCIAS ----\n";	//Impresi�n en consola.
					cout << "Ingrese un numero base: " << endl;	//Pedir datos.
					cin >> base;	//Almacenar datos.
					
					cout << "Ingrese un numero exponente: " << endl; //Pedir datos.
					cin >> exp;	//Almacenar datos.
					
					cout << base << " elevado al exponente " << exp << " es: " << calcularPotencia(base, exp) << endl;	//Impresi�n del resultado retornado de la funci�n con sus par�metros.												
				   break;	//Corte.
			case 3:int esPrimo(int num);	//Llamado a la funci�n, enviando par�metros.
					int num;	//Declaraci�n de variables.
					system("cls");	//Limpia la pantalla.
					cout << "---- DETERMINAR SI EL NUMERO ES PRIMO O NO ----\n";	//Impresi�n en consola.
					cout << "Ingrese un numero: " << endl;	//Pedir datos.
					cin >> num;	//Almacenar datos.
		
					cout << esPrimo(num) << endl;	//Impresi�n del resultado retornado de la funci�n con sus par�metros.
				   break;	//Corte.
			case 4:int esBisiesto(int anio);	//Llamado a la funci�n, enviando par�metros.
					int anio;	//Declaraci�n de variables.
					system("cls");	//Limpia la pantalla.
					cout << "---- VERIFICACION DE UN ANIO BISIESTO ----\n";	//Impresi�n en consola.
					cout << "Ingrese un anio: " << endl;	//Pedir datos.
					cin >> anio;	//Almacenar datos.
					
					cout << esBisiesto(anio) << endl;	//Impresi�n del resultado retornado de la funci�n con sus par�metros.
				   break;	//Corte.
			case 5:	{
					system("cls");	//Limpia la pantalla.
					cout << "-- Salir del menu --";		//Impresi�n en consola.
					cout << "Saliendo del menu." << endl;		//Impresi�n en consola.
					break;	//Corte.
				}	  
			
			//En caso que se ingrese una opci�n inv�lida.
			default:{
				cout << "Opcion no valida. Por favor ingrese una opcion valida." << endl; //Imprime mensaje de error.
				break;	//Corte.
			}
		}
			
	//CICLO WHILE CON CENTINELA	
		cout << "Desea ingresar otra opcion s/n:"; //Imprime pregunta en consola.
		cin >> resp; 	 //Almacenar respuesta. 	
	}while (resp == 's'); //Mientras que la respuesta sea s, volver� a correr el programa.		
}

