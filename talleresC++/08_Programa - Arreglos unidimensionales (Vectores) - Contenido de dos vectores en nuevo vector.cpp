//Arreglos unidimensionales - Mostrar el contenido de dos vectores en un nuevo vector

# include <iostream>
# include <conio.h>

using namespace std;

int main(){
		
	char caracteres1[] = {'a','b','c','d','e'};
	char caracteres2[] = {'f','g','h','i','j'};
	char caracteres3[10];
	
	cout<<"\n --- Programa - Mostrar el contenido de dos vectores en un nuevo vector --- "<<endl;
	
	for (int i = 0; i < 5; i++){
	
		caracteres3[i] = caracteres1[i];
	
	}
		
	for (int i = 5; i < 10; i++){
	
		caracteres3[i] = caracteres2[i-5];
	
	}
	
	cout<<"\n Los elementos del tercer vector son : ";
	
	for (int i = 0; i < 10; i++){
	
		cout<<caracteres3[i]<<" ";
	
	}
	
		
	getch();
	return 0;
}
