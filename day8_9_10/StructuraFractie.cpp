#include <iostream>
#include <string>

using namespace std;
struct fractie {
    int numarator;
    int numitor;
};

void amplificareFractie(fractie f, int numarDeAmplificat) {
    fractie rezultat;
    rezultat.numarator = f.numarator * numarDeAmplificat;
    rezultat.numitor = f.numitor * numarDeAmplificat;
    cout << "Fractia dupa amplificare este:" << rezultat.numarator << "/" << rezultat.numitor;

}
void simplificareFunctie(fractie f, int numarDeSimplificat) {
    if (f.numarator % numarDeSimplificat == 0, f.numarator % numarDeSimplificat == 0) {
        fractie simplificare;
        simplificare.numarator = f.numarator / numarDeSimplificat;
        simplificare.numitor = f.numitor / numarDeSimplificat;
        cout << "Fractia dupa simplificare este: " << simplificare.numarator << "/" << simplificare.numitor;

    }
    if (f.numarator % numarDeSimplificat > 0, f.numitor % numarDeSimplificat > 0) {
        cout << " Fractia nu poate fi simplificata";

    }
}


int main() {
    fractie f;
    cout << "Numaratorul fractiei este=";
    cin >> f.numarator;
    cout << "Numitorul fractiei este=";
    cin >> f.numitor;
    /* int numarDeAmplificat;
     cout << "Numarul de amplificat este=";
     cin >> numarDeAmplificat;*/
    int numarDeSimplificat;
    cout << "Numarul de simplificat este=";
    cin >> numarDeSimplificat;
    /* amplificareFractie(f, numarDeAmplificat);*/
    simplificareFunctie(f, numarDeSimplificat);


    return 0;

}