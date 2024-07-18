//Arreglos unidimensionales - Multiplicación acumulada de los elementos del vector

# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	
	int numeros[] = {1,2,3,4,5};
	int multiplicacion = 1;
	
	cout<<"\n --- Programa - Multiplicaci"<<char(162)<<"n acumulada de los elementos del vector --- "<<endl;
	
	for (int i=0; i<5; i++){
		
		multiplicacion *=	numeros[i];
				
	}
	
	cout<<"\n La multiplicacion acumulada de los elementos del vector es : "<<multiplicacion<<endl;
	
	
	getch();
	return 0;
}
