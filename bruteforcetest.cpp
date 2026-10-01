#include <iostream>
#include <chrono>
using namespace std;

int main() {

    int PIN = 47621278;
    bool pintrovato = false;

    auto inizio = chrono::high_resolution_clock::now();

    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                for (int l = 0; l <= 9; l++) {
                  for (int h = 0; h <= 9; h++) {
                    for (int g = 0; g <= 9; g++) {
                        for (int d = 0; d <= 9; d++) {
                            for (int a = 0; a <= 9; a++) {
                                auto fine = chrono::high_resolution_clock::now();
                                auto durata = chrono::duration_cast<chrono::milliseconds>(fine - inizio);
                                int tentativo = (i * 10000000) + (j * 1000000) + (k * 100000) + (l * 10000) + (h * 1000) + (g * 100) + (d * 10) + a;
                                if (tentativo == PIN) {
                                    cout << "PIN trovato! e' " << tentativo << endl;
                                    cout << "Il tempo impiegato e' di " << durata << endl;
                                    pintrovato = true;
                                }
                            }
                        }
                    }
                    

                    }
                }
            }
        }
    } 
    return 0;
}