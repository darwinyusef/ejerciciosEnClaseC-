/*Realizar un programa que defina una matriz cuadrada de 3x3 con
números enteros {1,2,3},{4,5,6},{7,8,9} y muestre en la salida estándar la
diagonal principal de la matriz.*/

# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	int numeros[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	cout<<"\n La matriz creada es : \n \n";
	
	for (int f = 0; f < 3; f++){
		for (int c = 0; c < 3; c++){
			cout<<numeros[f][c]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n La diagonal principal de la matriz es : \n \n";
	
	for (int f = 0; f < 3; f++){
		for (int c = 0; c < 3; c++){
			if (f == c){
				cout<<numeros[f][c]<<" ";
			}else{
				
				cout<<0<<" ";
			}
			
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
