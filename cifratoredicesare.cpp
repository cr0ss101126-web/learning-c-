#include <iostream>
using namespace std;

int main() {
    string TestoDaCifrare;
    int cifratore = 3;

    cout << "Immetti un testo da cifrare" << endl;
    getline(cin, TestoDaCifrare);

    for (int i = 0; i < TestoDaCifrare.length(); i++) {
        TestoDaCifrare[i] = TestoDaCifrare[i] + cifratore;
    }

    cout << "Il testo cifrato e' " << TestoDaCifrare;

    return 0;
}