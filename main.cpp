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
		cout << a.toString() << endl;
		d = (a + b);
		cout << d.toString() << endl;
	}catch (const char* message){
		cerr << "Excepcion: " << message << endl;
	}
	
	return 0;
}


