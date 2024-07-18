//Arreglos unidimensionales - Mostrar elemento menor de un vector

# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	
	int numeros[9999], n, menor = 9999999999;
	
	cout<<"\n --- Programa - Mostrar el elemento menor del vector --- "<<endl;
	cout<<"\n Digite el n"<<char(163)<<"mero de elementos del vector  : ";cin>>n;
	
	for (int i = 0; i < n; i++){
		
		cout<<"\n Digite un n"<<char(163)<<"mero : ";cin>>numeros[i];
		
		if (numeros[i] < menor){
			
			menor = numeros[i];
			
		}			
	}
		
	cout<<"\n\n El menor elemento del vector es : "<<menor<<endl;
	
	
	getch();
	return 0;
}
