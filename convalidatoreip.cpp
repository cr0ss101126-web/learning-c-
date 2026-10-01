#include <iostream>
using namespace std;

int main() {
    string IP;
    int punti = 0;

    cout << "Immetti un indirizzo IP per convalidarlo:" << endl;
    cin >> IP;
    
    if (IP.length() == 11) {

        for (int i = 0; i < IP.length(); i++) {
            if (IP[i] == '.') {
                punti++;
                if (punti == 3) {
                    cout << "Indirizzo IP valido!" << endl;
                } else {
                    cout << "Attenzione! indirizzo IP non valido!" << endl;
                }
            }
        }

    } else {
        cout << "Attenzione! indirizzo IP non valido!" << endl;
    }
    return 0;

}