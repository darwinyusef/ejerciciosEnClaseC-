/*Realizar un programa para crear una matriz que lea
de la entrada estándar de una matriz de números enteros, así como el número de filas y de
columnas y muestre en la salida estándar la matriz creada.*/


# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	int numeros[100][100], nFilas, nColumnas;
	
	cout<<"\n --- Programa para crear y rellenar una matriz de (n) filas y (n) columnas ---";
	cout<<"\n Digite el numero de filas para la matriz : ";cin>>nFilas;
	cout<<"\n Digite el numero de columnas para la matriz : ";cin>>nColumnas;
	
	for (int f = 0; f < nFilas; f++){
		for (int c = 0; c < nColumnas; c++){
			cout<<"\n Digite un valor entero para la matriz en ["<<f<<"] ["<<c<<"] : ";cin>>numeros[f][c];
		}
	}
	
	cout<<"\n La matriz creada es : \n";
	
	for (int f = 0; f < nFilas; f++){
		for (int c = 0; c < nColumnas; c++){
			cout<<numeros[f][c]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}




















