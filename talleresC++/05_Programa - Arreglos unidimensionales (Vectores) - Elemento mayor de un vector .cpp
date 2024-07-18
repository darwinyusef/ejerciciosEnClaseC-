//Arreglos unidimensionales - Mostrar elemento mayor de un vector

# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	
	int numeros[9999], n, mayor = 0;
	
	cout<<"\n --- Programa - Mostrar el elemento mayor del vector --- "<<endl;
	cout<<"\n Digite el n"<<char(163)<<"mero de elementos del vector  : ";cin>>n;
	
	for (int i = 0; i < n; i++){
		
		cout<<"\n Digite un n"<<char(163)<<"mero : ";cin>>numeros[i];
		
		if (numeros[i] > mayor){
			
			mayor = numeros[i];
			
		}			
	}
		
	cout<<"\n\n El mayor elemento del vector es : "<<mayor<<endl;
	
	
	getch();
	return 0;
}
