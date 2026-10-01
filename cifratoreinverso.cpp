#include <iostream>
using namespace std;

int main() {
    string TestoDaDeCifrare;
    int decifratore = 3;

    cout << "Immetti un testo da decifrare" << endl;
    getline(cin, TestoDaDeCifrare);

    for (int i = 0; i < TestoDaDeCifrare.length(); i++) {
        TestoDaDeCifrare[i] = TestoDaDeCifrare[i] - decifratore;
    }

    cout << "Il testo decifrato e'  " << TestoDaDeCifrare;

    return 0;
}