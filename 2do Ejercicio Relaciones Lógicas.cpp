#include <iostream>
#include <math.h>
using namespace std;

int numero(){
	system("cls");
	cout << "-- Determinacion de un numero par o impar --" << endl; 
	int num;
	cout << "Digite un numero: \n";
	cin >> num;
	
	if(num%2 == 0)
	{
		cout << "El numero es par" << endl;
	}
	else
	{
		cout << "El numero es impar" << endl;
	}	
}

//*******************************************************************************************************
int anio(){
	system("cls");
	cout << "-- Determinacion de un anio bisiesto --" << endl;
	int anio;
	cout << "Ingrese un anio: \n";
	cin >> anio;
	
	if (anio % 4 != 0 || (anio % 100 == 0 && anio % 400 != 0))
		cout << "Este anio no es bisiesto" << endl;
	else
		cout << "Este anio es bisiesto" << endl;
}

//*******************************************************************************************************
int numeros_iguales()
{
	system("cls");
	cout << "-- Comprobacion de igualdad de numeros --" << endl;
	int num1, num2;
	cout << "Ingrese el primer numero: \n";
	cin >> num1;
	cout << "Ingrese el segundo numero: \n";
	cin >> num2;
	
	if(num1 == num2){
		cout << "Son iguales" << endl;
	}else{
		cout << "No son iguales" << endl;
	}
}

//*******************************************************************************************************
int edad()
{
	system("cls");
	cout << "-- Determinacion de la mayoria de edad --" << endl;
	int edad;
	cout << "Ingrese la edad de la persona: \n";
	cin >> edad;
	
	if (edad >= 18)
	{
		cout << "La persona es mayor de edad." << endl;
	} else {
		cout << "La persona no es mayor de edad." << endl;
	}
}

//*******************************************************************************************************
int aprobacion()
{
	system("cls");
	cout << "-- Verificacion de un examen --" << endl;
	char nombre[50];
	int nota;
	cout << "Ingrese el nombre del Estudiante:\n";
	cin >> nombre;
	cout << "Ingrese la nota del examen final:\n";
	cin >> nota;
	
	if(nota >= 60)
	{
		cout << "El estudiante " << nombre << " ha aprobado." << endl;
	} 
	else
	{
		cout << "El estudiante " << nombre << " no ha aprobado." << endl;	
	}
}

//********************************************************************************************************
int main()
{
	int opcion;
	char resp;
	resp = 's';
	do
	{
		system("cls");
		cout << "---- BIENVENIDO A MI PROGRAMA ----\n";
		cout << "1 - Verificar si el numero es par\n";
		cout << "2 - Determinar si el anio es bisiesto o no\n";
		cout << "3 - Determinar dos numeros si son iguales o no\n";
		cout << "4 - Determinar una edad como mayor o no\n";
		cout << "5 - Verificar si un estudiante aprobo o no\n";
		cout << "6 - Finalizar\n";
		
		cout << "Ingrese su opcion:";
		cin >> opcion;
		switch (opcion) 
		{
			case 1:numero();
				   break;
			case 2:anio();
				   break;
			case 3:numeros_iguales();
				   break;
			case 4:edad();
				   break;
			case 5:aprobacion();
				   break;		  
			case 6:{
					system("cls");
					cout << "-- Salir del menu --";
					cout << "Saliendo del menu." << endl;
					break;
			}
			
			default:{
				cout << "Opcion no valida. Por favor ingrese una opcion valida." << endl;
				break;
			}
		}
			
	//CICLO WHILE CON CENTINELA	
		cout << "Desea ingresar otra opcion s/n:";
		cin >> resp; 	  	
	}while (resp == 's');		
}
