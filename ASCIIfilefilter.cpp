#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

    string fileDaAnalizzare;
    cout << "Immetti il nome del file da analizzare" << endl;
    cin >> fileDaAnalizzare;
    cin.ignore();

    ifstream file(fileDaAnalizzare, ios::binary);

    if (!file.is_open()) {
        cout << "Errore, file non aperto" << endl;
        return 1;
    }

    char c;
    string parolaCorrente = "";

     ofstream report("ReportFile.txt");

    while (file.get(c)) {



        if (c >= 32 && c <= 126) {
            parolaCorrente += c;

        } else {
            if (parolaCorrente.size() >= 4) {
                cout << parolaCorrente << endl;
                report << parolaCorrente << endl;
            }
            parolaCorrente = "";
        }
    }
    report.close();

    return 0;


}