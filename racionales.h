#pragma once
#include <string>

using std::string;

class Racionales{
	int numerador;
	int denominador;
 public:
 	Racionales(int = 1 , int = 1);
 	string toString() const;
 	void setNumerador(int);
 	void setDenominador(int);
 	void simplify();
 	int getNumerador()const;
 	int getDenominador()const;
 	double toDouble();
 	const Racionales& operator+=(const Racionales&);
	const Racionales& operator-=(const Racionales&);
	const Racionales& operator*=(const Racionales&);
	const Racionales& operator/=(const Racionales&);
	const Racionales& operator=(const Racionales&);

	
	friend const Racionales operator+(const Racionales&,const Racionales&);
	friend const Racionales operator-(const Racionales&,const Racionales&);
	friend const Racionales operator*(const Racionales&,const Racionales&);
	friend const Racionales operator/(const Racionales&,const Racionales&);
};
