#include<iostream>
using namespace std;

int main() {
	float a, b, produs;
	double c, d, impartire;

	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b; 
	cout << "c=";
	cin >> c;
	cout << "d=";
	cin >> d;
	produs = a * b;
	impartire = c / d;
	cout << a << "*" << b << "=" << produs;
	cout << c << "/" << d << "=" << impartire;

	return 0;
}
