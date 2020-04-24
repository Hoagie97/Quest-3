#include<iostream>
using namespace std;

class Rational {
	int numerator;
	int denomenator;
public:
	Rational();	
	Rational(int, int);	
	Rational(int wholeNumber);

	void input(int, int);	

	int getNume();
	int getDenom();

	void result();	
	Rational operator+(const Rational&);
	Rational operator-(const Rational&);
	Rational operator*(const Rational&);
	Rational operator/(const Rational&);
	
	Rational add(const Rational&);
	Rational subtract(const Rational&);
	Rational multiply(const Rational&);
	Rational divide(const Rational&);
};

Rational::Rational() {
	numerator = 0;
	denomenator = 1;
}

Rational::Rational(int nume, int denom) {
	input(nume, denom);
}

Rational::Rational(int nume) {
	numerator = nume;
	denomenator = 1;
}

void Rational::input(int nume, int denom) {
	numerator = nume;

	if (denom > 0) 
		denomenator = denom;

	else if (denom < 0) { 
		denomenator = -denom;
		numerator *= -1;
	}
	else 
		denomenator = 1;
}

int Rational::getNume() { 
return numerator; 
}

int Rational::getDenom() { 
	return denomenator; 
}

void Rational::result() {
	cout << numerator << "/" << denomenator;
	return;
}


Rational Rational::add(const Rational& b) {
	int nume = numerator * b.denomenator + denomenator * b.numerator;
	int denom = denomenator * b.denomenator;

	return Rational(nume, denom);
}

Rational Rational::operator+(const Rational& b) {
	return add(b);
}

Rational Rational::subtract(const Rational& b) {
	int nume = numerator * b.denomenator - denomenator * b.numerator;
	int denom = denomenator * b.denomenator;

	return Rational(nume, denom);
}
Rational Rational::operator-(const Rational& b) {
	return subtract(b);
}


Rational Rational::multiply(const Rational& b) {
	int nume = numerator * b.numerator;
	int denom = denomenator * b.denomenator;

	return Rational(nume, denom);
}

Rational Rational::operator*(const Rational& b) {
	return multiply(b);

}

Rational Rational::divide(const Rational& b) {
	int nume = numerator * b.denomenator;
	int denom = denomenator * b.numerator;

	return Rational(nume, denom);
}
Rational Rational::operator/(const Rational& b) {
	return divide(b);
}

int main() {
	
	return 0;
}
