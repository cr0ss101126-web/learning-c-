#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    string anallizzatoresec = "analyze";
    string sceltaterminale;
    string nomeUtente = "mario";
    int a = 0;
    int minaccetrovate = 0;

    vector<string> logs;


    while (a == 0)
    {
        cout << "Benvenuto nel terminale operativo! immetti un nome utente" << endl;
        cin >> sceltaterminale;

        if (sceltaterminale == anallizzatoresec) {

            cout << "Benvenuto nel tuo siem personale. sto analizzando le minacce" << endl;
            for (int i = 0; i < logs.size(); i++) {
                string rigaCorrente = logs[i];

                if (rigaCorrente.find("ATTENZIONE") != string::npos) {
                    cout << "ATTENZIONE MINACCIA TROVATA: " << rigaCorrente << endl;
                    minaccetrovate++;
                }
            
            }
            break;


        } else if (sceltaterminale == nomeUtente) {
            cout << "Benvenuto!" << endl;
            logs.push_back("Accesso da parte di mario");
            break;
        } else {
            cout << "ATTENZIONE ACCESSO FALLITO, RIPROVA" << endl;
            logs.push_back("ATTENZIONE, ACCESSO FALLITO DA PARTE DI " + sceltaterminale);

        }

    }
}
