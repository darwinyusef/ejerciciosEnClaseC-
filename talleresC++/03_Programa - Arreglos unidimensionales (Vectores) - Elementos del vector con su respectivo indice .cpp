//Arreglos unidimensionales - Elementos del vector con su respectivo indice

# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	
	int n;
	
	cout<<"\n --- Programa - Elemento del vector con su respectivo "<<char(161)<<"ndice --- "<<endl;
	cout<<"\n Digite el n"<<char(163)<<"mero de elementos del vector  : ";cin>>n;
	int numeros[n];
	
	for ( int i = 0; i < n; i++){
		
		cout<<"\n Digite un n"<<char(163)<<"mero : ";cin>>numeros[i]; //Llenar vector de numeros enteros
				
	}
	
	for (int i = 0; i < n; i++){
		
		cout<<"\n El elemento del vector con "<<char(161)<<"ndice ["<<i<<"] es -> "<<numeros[i]; //Escribir el contenido del vector
				
	}
	
	getch();
	return 0;
}
