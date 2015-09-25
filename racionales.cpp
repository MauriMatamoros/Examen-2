#include <string>
#include <sstream>
#include "racionales.h"
using std::string;
using std::stringstream;

Racionales::Racionales(int numerador, int denominador){
	if(denominador==0)
		throw "Cannot divide by zero";
	this-> numerador = numerador;
	this-> denominador = denominador;
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
void Racionales::simplify(int simplificador){
	this-> denominador = this-> denominador / simplificador;
	this-> numerador = this-> numerador/ simplificador;
}
string Racionales::toString()const{
	stringstream ss;
	ss <<  numerador << "/" << denominador;
	return ss.str();
}
const Racionales& Racionales::operator+=(const Racionales& r){
	if (this->denominador != r.getDenominador()){
		this->denominador *= r.getDenominador();
		this->numerador *= r.getDenominador();
		double rDen =0;
		rDen = this->denominador * r.getNumerador();
		this->numerador+= rDen;
	}else{
		this->denominador = r.getDenominador();
		this->numerador = r.getDenominador();
	}
	return *this;
}
const Racionales& Racionales::operator-=(const Racionales& r){
	this->numerador -= r.getNumerador();
	if (this->denominador != r.getDenominador())
		this->denominador *= r.getDenominador();
	else
		this->denominador = r.getDenominador();
	return *this;
}
const Racionales& Racionales::operator*=(const Racionales& r){
	this->numerador *= r.getNumerador();
	this->denominador *= r.getDenominador();
	return *this;
}
const Racionales& Racionales::operator/=(const Racionales& r){
	this->numerador /= r.getDenominador();
	this->denominador /= r.getNumerador();
	return *this;
}
const Racionales& Racionales::operator=(const Racionales& r){
	this->numerador = r.getNumerador();
	this->denominador = r.getDenominador();
	return *this;
}
const Racionales operator+(const Racionales l, const Racionales& r){
	Racionales retVal(l);
	retVal += r;
	return retVal;
}
const Racionales operator-(const Racionales l, const Racionales& r){
	Racionales retVal(l);
	retVal -= r;
	return retVal;
}
const Racionales operator*(const Racionales l, const Racionales& r){
	Racionales retVal(l);
	retVal *= r;
	return retVal;
}
const Racionales operator/(const Racionales l, const Racionales& r){
	Racionales retVal(l);
	retVal /= r;
	return retVal;
}

