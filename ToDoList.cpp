#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    int scelta;
    vector<string> toDoList;
    int a = 0;


    while (a < 10)
    {
        cout << "Benvenuto, scegli cosa fare: " << endl;
        cout << "(1)Aggiungi un elemento alla lista" << endl;
        cout << "(2)Leggi la lista" << endl;
        cout << "(3)Rimuovi un elemento dalla lista" << endl;
        cout << "(4)Esci" << endl;
        cin >> scelta;
        cin.ignore();

        if (scelta == 1) {
            string elementoDaAggiungere;
            cout << "Cosa vuoi aggiungere alla tua lista di cose da fare?" << endl << endl;
            cin >> elementoDaAggiungere;
            cin.ignore();
            toDoList.push_back(elementoDaAggiungere);
        
        } else if (scelta == 2) {
            cout << "Ecco la tua lista di cose da fare: " << endl << endl << endl;
            for (int i = 0; i < toDoList.size(); i++) {
                cout << toDoList[i] << endl << endl << endl;
            }
        } else if (scelta == 3) {

            int elementoRimosso;
            cout << "quale elemento della lista vuoi eliminare?" << endl << endl << endl;
            for (int i = 0; i < toDoList.size(); i++) {
                cout << toDoList[i] << endl << endl << endl;
            }
            cout << "Scegli la posizione dell'elemento da eliminare:    ";
            cin >> elementoRimosso;
            cin.ignore();
            int elementoDaRim = elementoRimosso - 1;
            if (elementoDaRim >= 0 && elementoDaRim < toDoList.size()) {
                toDoList.erase(toDoList.begin() + elementoDaRim);
                cout << "Elemento rimosso con successo!" << endl << endl << endl;
            } else {
                cout << "Attenzione, elemento non esistente" << endl << endl << endl;
            }

        } else {
            break;
        }
    }
    return 0;

}