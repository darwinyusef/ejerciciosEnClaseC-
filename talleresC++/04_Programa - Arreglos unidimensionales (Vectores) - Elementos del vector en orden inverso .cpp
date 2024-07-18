//Arreglos unidimensionales - Mostrar elementos del vector en orden inverso

# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	
	int numeros[] = {1,2,3,4,5};
	
	cout<<"\n --- Programa - Mostrar el elementos del vector en orden inverso --- \n\n";
	
	for (int i=4; i>=0; i--){
		
		cout<<"\n El elemento del vector con "<<char(161)<<"ndice ["<<i<<"] es el -> "<<numeros[i];
				
	}
	
	
	getch();
	return 0;
}
