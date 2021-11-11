#include<iostream>
using namespace std;

int main() {

	int n;
	cout << "Numarul este:";
	cin >> n;

	if (n % 2 == 0) {
		cout << n << " este numar par!";
	}
	else {
		cout << n << " este numar impar!";
	}

}