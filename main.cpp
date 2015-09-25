#include <iostream>
#include <string>
#include "racionales.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int divisores(int);

int main(int argc, char* argv[]){
	try{
		Racionales a(3,6), b(4,5), c(1,1), d;
	

		int divisores_denominador = divisores(a.getDenominador());
		int divisores_numerador = divisores(a.getNumerador());
		int array_denominador[divisores_denominador];
		int array_numerador[divisores_numerador];
		int simplificador = 0;
		int bandera= 0;
		for (int i = 1; i <= a.getDenominador(); i++)
			{
				if (a.getDenominador()%i == 0)
				{
					array_denominador[bandera] = i;
					bandera++;
				}
			}
		bandera = 0;
		for (int i = 1; i <= a.getNumerador(); i++)
		{
			if (a.getNumerador()%i == 0)
				{
					array_numerador[bandera] = i;
					bandera++;
				}
		}
		for (int i = 0; i < divisores_denominador; i++)
		{
			for (int j = 0; j < divisores_numerador; j++)
			{
				if (array_numerador[j] == array_denominador[i])
				{
					simplificador = array_numerador[j];
				}
			}
		}
		
		a/=b;
		//d = (a+b);
		cout << a.toString() << endl;
		//cout << "d: " << d.toString() << endl; 
		//Racionales f;
		//f = b*b;
		


		//imprime divisores
		/*for (int i = 0; i < divisores_denominador; ++i)
		{
			cout << array_denominador[i] <<endl;

		}
		cout << endl;
		for (int i = 0; i < divisores_numerador; ++i)
		{
			cout << array_numerador[i] << endl;
		}*/

		
				


	//	cout << b.toDouble() << endl;

	}catch (const char* message){
		cerr << "Excepcion: " << message << endl;
	}
	
	return 0;
}

int divisores (int numero){
	int contador = 0;
	for (int i = 1; i <= numero; ++i)
	{
		if (numero%i == 0)
		{
			contador++;
		}
	}
	return contador;
}
