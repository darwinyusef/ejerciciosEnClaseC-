//Arreglos unidimensionales - Mostrar si un número igual a la suma del resto de elementos del vector

# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	
	
	
	int numeros[9999], n, suma = 0, mayor = 0;
	
	cout<<"\n --- Programa - Mostrar si un n"<<char(162)<<"mero entero, es igual a la suma del resto de elementos del vector --- "<<endl;
	cout<<"\n Digite el n"<<char(163)<<"mero de elementos del vector  : ";cin>>n;
	
	for (int i = 0; i < n; i++){
		
		cout<<"\n Digite un n"<<char(163)<<"mero entero : ";cin>>numeros[i];
		
		suma += numeros[i];
		
		if (numeros[i] > mayor){
			
			mayor = numeros[i];
			
		}
	}
	
	if (mayor == suma - mayor){
			
		cout<<"\n\n El n"<<char(163)<<"mero "<<mayor<<" es igual a la suma del resto de los elementos del vector "<<endl;
	}
	else{
		cout<<"\n\n No existe un n"<<char(163)<<"mero que sea igual a la suma del resto de los elementos del vector "<<endl;
			
	}
	
	
	getch();
	return 0;
}
