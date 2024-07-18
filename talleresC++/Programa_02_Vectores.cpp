/*Multiplicación de los elementos del vector: Realizar
un programa que defina un vector de números enteros {1,2,3,4,5} y calcule la multiplicación
acumulada de sus elementos.*/

# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	int numeros[] = {1, 2, 3, 4, 5};
	int multiplicacion = 1;
	
	for (int i = 0; i <= 4; i++){
		multiplicacion += numeros[i];
	}
	
	cout<<"\n La multiplicación de los elementos del vector numeros[], es : "<<multiplicacion<<endl;
	
	getch();
	return 0;	
}
