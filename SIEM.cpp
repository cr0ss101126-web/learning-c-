#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> logs {
        "ATTENZIONE accesso sconosciuto da IP 1.1.1.1",
        "Accesso da parte di nome1",
        "Accesso da parte di nome2",
        "ACCESSO FALLITO da parte di utente sconosciuto",
        "Accesso da parte di nome3",
    };

    int minacceTrovate = 0;

    for (int i = 0; i < logs.size(); i++) {
        string rigaCorrente = logs[i];

        if (rigaCorrente.find("ATTENZIONE") != string::npos ||
            rigaCorrente.find("ACCESSO FALLITO") != string::npos) {
                cout << "ATTENZIONE, MINACCIA TROVATA: " << rigaCorrente << endl;
                minacceTrovate++;
        }
    }
    return 0;
}   