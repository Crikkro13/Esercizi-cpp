#include <iostream>
#include "vector"

using namespace std;

template <typename T>
class Matrice {
private:
    int righe, colonne;
    vector<vector<T>> valori;
public:
    Matrice(int righe, int colonne, T initalValue) : righe(righe), colonne(colonne), valori(righe,vector<T>(colonne, initalValue)) {}

    Matrice(const Matrice& other) {
        righe = other.righe;
        colonne = other.colonne;
        valori = other.valori;
    }

    Matrice operator == (const Matrice& other) {
        for (int i=0; i<righe; i++){
            for (int j=0; j<colonne; j++){
                if (valori[i][j] != other.valori[i][j])
                    return false;
            }
        }
        return true;
    }

    void setValue(int riga, int colonna, T value) {
        if (riga <0 || riga > righe || colonna<0 || colonna > colonne)
            throw invalid_argument("Numero non valido!");
        else
            valori[riga][colonna] = value;
    }

    void readValue(int riga, int colonna) const {
        if (riga <0 || riga > righe || colonna<0 || colonna > colonne)
            throw invalid_argument("Numero non valido!");
        else
            cout << "Valore in posizione [" << riga << "][" << colonna << "] = " << valori[riga][colonna] << endl;
    }

    void print() const {
        cout << "Stampa della matrice: " << endl;
        for (int i=0; i<righe; i++){
            for (int j=0; j<colonne; j++){
                cout << valori[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    try {
        Matrice<int> matrice1(3, 3, 1);
        matrice1.print();
        matrice1.setValue(0, 1, 7);
        matrice1.print();
        matrice1.readValue(0, 1);
        Matrice<int> matrice2(matrice1);
        matrice2.print();
        Matrice<int> matrice3(2, 2, 0);
        matrice3.print();
        matrice3 = matrice1;
        matrice3.print();
        Matrice<float> matrice4(4, 4, 3.5);
        matrice4.print();
    } catch (const exception& e) {
        cout << "Eccezione lanciata! " << e.what() << endl;
    }
}
