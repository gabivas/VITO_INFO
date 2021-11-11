#include<iostream>
using namespace std;

int main() {
	int i = 0, j = 0, k = 10,l=10;
	cout << "i++:" << i++<<endl;
	cout << "i:" << i << endl;
	cout << "++j:" << ++j<<endl;
	cout << "j:" << j << endl;

	cout << "k--:" << k-- << endl;
	cout << "k:" << k << endl;
	cout << "--l:" << --l << endl;
	cout << "l:" << l << endl;

	k -= 9;
	cout << "k:" << k << endl;
	i *= 7;
	cout << "l:" << i << endl;
	return 0;
}