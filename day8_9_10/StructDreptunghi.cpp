#include <iostream>
#include <string>
using namespace std;
struct dreptunghi {
    int lungime;
    int latime;
};

int perimetru(dreptunghi d1) {
    int perimetru = 2 * d1.lungime + 2 * d1.latime;
    return perimetru;
}

int arie(dreptunghi d1) {
    int arie = d1.latime * d1.lungime;
    return arie;

}



int main() {
    dreptunghi d1;
    cout << "Lungimea dreptunghiului este=";
    cin >> d1.lungime;

    cout << "Latimea dreptunghiului este=";
    cin >> d1.latime;

    cout << "Perimetrul este: " << perimetru(d1) << endl;
    cout << "Aria este : " << arie(d1) << endl;

    return 0;
}