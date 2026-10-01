#include <iostream>

using namespace std;

int main() {

    int PIN = 1256;
    string NomeUtente = "hacker1";
    string tentativoNome;
    int tentativoPIN;

    cout << "Terminale operativo" << endl << "Immettere nome utente" << endl;
    cin >> tentativoNome;
    if (tentativoNome == NomeUtente) {
        cout << "Inserisci il PIN" << endl;
        cin >> tentativoPIN;
        if (tentativoPIN == PIN) {
            cout << "ACCESSO CONSENTITO" << endl;
        } else {
            cout << "ACCESSO NEGATO" << endl;
        }
    } else {
        cout << "ACCESSO NEGATO" << endl;
    }
    return 0;
}