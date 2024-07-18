# include <iostream>
# include <conio.h>

using namespace std;

int main(){
	
	int numeros[] = {1,2,3,4,5};
	
	cout<<"\n --- Programa - Mostrar el elementos del vector en orden inverso --- \n\n";
	
	cout<<"\n Los elementos del vector son : [";
	
	for (int i=4; i>=0; i--){
	
		if (i == 0){
			cout<<numeros[i]<<"]";
		}else{
			cout<<numeros[i]<<", ";
		}	
	}
	
	getch();
	return 0;
}
