#include <iostream>
#include <string>
#include <vector>
#include <sstream> 
#include "racionales.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::stringstream;

int divisores(int);

int main(int argc, char* argv[]){
	try{
		
		Racionales a(3,6), b(4,5), c(1,1), d;
		int nume=0,deno=0,nume2=0,deno2=0,op=0;
		vector<string>lista;
		do{
			
			
			cout<<"Que operacion desea hacer?"<<endl;
			cout<<"1. Sumar "<<endl;
			cout<<"2. Restar "<<endl;
			cout<<"3. Multiplicar "<<endl;
			cout<<"4. Dividir "<<endl;
			cout<<"5. Ver registro"<<endl;
			cout<<"6. Salir "<<endl;

			cout<<"Que opcion desea? "<<endl;
			cin>>op;
			if(op==1){
				cout<<"Ingrese el numerador: "<<endl;
				cin>>nume;
				cout<<"Ingrese el denominador: "<<endl;
				cin>>deno;
				Racionales w(nume,deno);
				cout<<"Ingrese el numerador: "<<endl;
				cin>>nume2;
				cout<<"Ingrese el denominador: "<<endl;
				cin>>deno2;
				Racionales z(nume2,deno2);
				cout<<w.toString()<<"+"<<z.toString()<<"="<<endl;
				d=w+z;
				cout<<d.toString()<<endl;
				stringstream ss;
				ss << w.toString() << "+" << z.toString() << "=" << d.toString();
				ss.str();
				lista.push_back(ss.str());
			}else if(op==2){
				cout<<"Ingrese el numerador: "<<endl;
				cin>>nume;
				cout<<"Ingrese el denominador: "<<endl;
				cin>>deno;
				Racionales w(nume,deno);
				cout<<"Ingrese el numerador: "<<endl;
				cin>>nume2;
				cout<<"Ingrese el denominador: "<<endl;
				cin>>deno2;
				Racionales z(nume2,deno2);
				cout<<w.toString()<<"+"<<z.toString()<<"="<<endl;
				d=w-z;
				cout<<d.toString()<<endl;
				stringstream ss;
				ss << w.toString() << "-" << z.toString() << "=" << d.toString();
				ss.str();
				lista.push_back(ss.str());
			}else if(op==3){
				cout<<"Ingrese el numerador: "<<endl;
				cin>>nume;
				cout<<"Ingrese el denominador: "<<endl;
				cin>>deno;
				Racionales w(nume,deno);
				cout<<"Ingrese el numerador: "<<endl;
				cin>>nume2;
				cout<<"Ingrese el denominador: "<<endl;
				cin>>deno2;
				Racionales z(nume2,deno2);
				cout<<w.toString()<<"+"<<z.toString()<<"="<<endl;
				d=w*z;
				cout<<d.toString()<<endl;
				stringstream ss;
				ss << w.toString() << "*" << z.toString() << "=" << d.toString();
				ss.str();
				lista.push_back(ss.str());

			}else if(op==4){
				cout<<"Ingrese el numerador: "<<endl;
				cin>>nume;
				cout<<"Ingrese el denominador: "<<endl;
				cin>>deno;
				Racionales w(nume,deno);
				cout<<"Ingrese el numerador: "<<endl;
				cin>>nume2;
				cout<<"Ingrese el denominador: "<<endl;
				cin>>deno2;
				Racionales z(nume2,deno2);
				cout<<w.toString()<<"+"<<z.toString()<<"="<<endl;
				d=w/z;
				cout<<d.toString()<<endl;
				stringstream ss;
				ss << w.toString() << "/" << z.toString() << "=" << d.toString();
				ss.str();
				lista.push_back(ss.str());

			}else if(op==5){
				for (int i = 0; i < lista.size(); ++i)
				{
					cout<<lista[i]<<endl;
				}
			}else{
				cout<<"Hasta luego"<<endl;
			}

		}while(op>0&&op<6);

		
	}catch (const char* message){
		cerr << "Excepcion: " << message << endl;
	}
	
	return 0;
}


