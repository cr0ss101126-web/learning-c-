#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string nomeFile;
    cout << "Immetti il nome del file da analizzare" << endl;
    cin >> nomeFile;
    cin.ignore();

    ifstream file(nomeFile, ios::binary);

    if (!file.is_open()) {
        cout << "Errore, file non aperto" << endl;
        return 1;
    }

    char header[2];
    file.read(header, 2);

    if (header[0] == 'M' && header[1] == 'Z') {
        cout << "ATTENZIONE, MINACCIA RILEVATA" << endl;
    } else {
        cout << "Nessuna minaccia rilevata" << endl;
    }
    return 0;

}