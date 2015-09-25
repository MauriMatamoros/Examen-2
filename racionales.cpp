#include <string>
#include <sstream>
#include "racionales.h"
#include <iostream>
using std::string;
using std::stringstream;
using std::cout;
using std::endl;

Racionales::Racionales(int numerador, int denominador){
	if(denominador==0)
		throw "Cannot divide by zero";

	 int u= numerador;
	 int v= denominador;
	 while ( v != 0) {
        int r = u % v;
        u = v;
        v = r;
    }

	this-> numerador = numerador/u;
	this-> denominador = denominador/u;

}
void Racionales::setDenominador(int denominador){
	this-> denominador = denominador;
}
void Racionales::setNumerador(int numerador){
	this-> numerador = numerador;
}
int Racionales::getDenominador()const{
	return denominador;
}
int Racionales::getNumerador()const{
	return numerador;
}
double Racionales::toDouble(){
	double num = this-> numerador, den = this-> denominador;
	return num/den;
}
void Racionales::simplify(){
	 int u= this->numerador;
	 int v= this->denominador;
	 while ( v != 0) {
        int r = u % v;
        u = v;
        v = r;
    }
    this->numerador/=u;
    this->denominador/=u;
}
string Racionales::toString()const{
	stringstream ss;
	ss <<  numerador << "/" << denominador;
	return ss.str();
}
const Racionales& Racionales::operator+=(const Racionales& r){
	if (this->denominador != r.getDenominador()){
		//cout << this->denominador << endl;
		this->numerador *= r.getDenominador();
		double rDen =0;
		rDen = this->denominador * r.getNumerador();
		//cout << rDen << endl;
		this->denominador *= r.getDenominador();
		this->numerador+= rDen;
	}else{
		this->denominador = r.getDenominador();
		this->numerador += r.getNumerador();
	}
	int u= this->numerador;
	int v= this->denominador;
	while ( v != 0) {
        int r = u % v;
        u = v;
        v = r;
    }
    this->numerador/=u;
    this->denominador/=u;
	return *this;
}
const Racionales& Racionales::operator-=(const Racionales& r){
	if (this->denominador != r.getDenominador()){
		//cout << this->denominador << endl;
		this->numerador *= r.getDenominador();
		double rDen =0;
		rDen = this->denominador * r.getNumerador();
		//cout << rDen << endl;
		this->denominador *= r.getDenominador();
		this->numerador-= rDen;
	}else{
		this->denominador = r.getDenominador();
		this->numerador -= r.getNumerador();
	}
	int u= this->numerador;
	int v= this->denominador;
	while ( v != 0) {
        int r = u % v;
        u = v;
        v = r;
    }
    this->numerador/=u;
    this->denominador/=u;
	return *this;
}
const Racionales& Racionales::operator*=(const Racionales& r){
	this->numerador *= r.getNumerador();
	this->denominador *= r.getDenominador();
	int u= this->numerador;
	int v= this->denominador;
	while ( v != 0) {
        int r = u % v;
        u = v;
        v = r;
    }
    this->numerador/=u;
    this->denominador/=u;
	return *this;
}
const Racionales& Racionales::operator/=(const Racionales& r){
	this->numerador *= r.getDenominador();
	this->denominador *= r.getNumerador();
	return *this;
}
const Racionales& Racionales::operator=(const Racionales& r){
	this->numerador = r.getNumerador();
	this->denominador = r.getDenominador();
	int u= this->numerador;
	int v= this->denominador;
	while ( v != 0) {
        int r = u % v;
        u = v;
        v = r;
    }
    this->numerador/=u;
    this->denominador/=u;
	return *this;
}
const Racionales operator+(const Racionales& l, const Racionales& r){
	Racionales retVal(l);
	retVal += r;
	return retVal;
}
const Racionales operator-(const Racionales& l, const Racionales& r){
	Racionales retVal(l);
	retVal -= r;
	return retVal;
}
const Racionales operator*(const Racionales& l, const Racionales& r){
	Racionales retVal(l);
	retVal *= r;
	return retVal;
}
const Racionales operator/(const Racionales& l, const Racionales& r){
	Racionales retVal(l);
	retVal /= r;
	return retVal;
}

