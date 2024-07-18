/*Suma de los elementos del vector: Realizar un
programa que defina un vector de números 
enteros {1,2,3,4,5} y calcule
la suma de sus elementos.*/

# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	int numeros[] = {1, 2, 3, 4, 5};
	int suma;
	
	for (int i = 0; i <= 4; i++){
		suma += numeros[i];
	}
	
	cout<<"\n La suma de los elementos del vector numeros[], es : "<<suma<<endl;
	
	getch();
	return 0;	
}
