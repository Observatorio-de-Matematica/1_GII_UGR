/* Programa para codificar una serie de numeros por el metodo RLE
Hecho por Adri�n de la Torre Rodr�guez 1�A grupo A1
*/

#include <iostream>
#include<cmath>

using namespace std;

int main () {
	
	int serie,num_digitos,dato,cantidad,i;
	
	do{
		
		cout<<"Introduce una serie de numeros, para acabar introduzca un numero negativo: ";
		cin>> serie;
		
		if(serie==serie)
			cantidad++;
		else
			cout<<cantidad << serie;
			
	}while(serie>0);
	
	system("pause");
	
}
		
