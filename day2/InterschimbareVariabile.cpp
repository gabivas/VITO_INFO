#include<iostream>
using namespace std;

int main() {

	int a = 10, b = 15, temp;

	cout << "a=" << a << " si b=" << b << endl;

	temp = a;
	a = b;
	b = temp;

	cout << "a=" << a << " si b=" << b << endl;
}