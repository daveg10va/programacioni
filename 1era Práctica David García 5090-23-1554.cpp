#include <iostream>
using namespace std;
float suma();
float resta();
float multiplicacion();
float division();
	

//Declaraci�n de variables en lenguaje C++ para usar memoria RAM

	//Lenguajes:
	//D�bilmente tipados
	
	//Fuertemente tipados
	int edad = 0;
	float valor1 = 0;
	float valor2 = 0;
	char letra = 'i';
	float resultado = 0;
	
int main()
{
	suma();
	resta();
	multiplicacion();
	division();
}

float suma(){
	//Instrucciones de programaci�n para calcular la suma
	cout << "--- SUMA ---" << endl;
	cout << "\nIngrese un numero: ";
	cin >> valor1;
	
	cout << "\nIngrese otro numero: ";
	cin >> valor2;
	
	resultado = valor1 + valor2;
	cout << "El resultado de la suma es: " << resultado << endl;
	return resultado;	
}

float resta(){
	//Instrucciones de programaci�n para calcular la resta
	cout << "\n--- RESTA ---" << endl;
	cout << "\nIngrese un numero: ";
	cin >> valor1;
	
	cout << "\nIngrese otro numero: ";
	cin >> valor2;
	
	resultado = valor1 - valor2;
	cout << "El resultado de la resta es: " << resultado << endl;
	return resultado;
}

float multiplicacion(){
	//Instrucciones de programaci�n para calcular la multiplicaci�n
	cout << "\n--- MULTIPLICACION ---" << endl;
	cout << "\nIngrese un numero: ";
	cin >> valor1;
	
	cout << "\nIngrese otro numero: ";
	cin >> valor2;
	
	resultado = valor1 * valor2;
	cout << "El resultado de la multiplicacion es: " << resultado << endl;
	return resultado;
}

float division(){
	//Instrucciones de programaci�n para calcular la divisi�n
	cout << "\n--- DIVISION ---" << endl;
	cout << "\nIngrese un numero: ";
	cin >> valor1;
	
	cout << "\nIngrese otro numero: ";
	cin >> valor2;
	
	resultado = valor1 / valor2;
	cout << "El resultado de la division es: " << resultado << endl;
	return resultado;
}


