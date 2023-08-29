#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {
    string text;
    string name;
    cout << "inserisci il nome del testo qui sotto con l'estensione .txt (eg. nome.txt)";
    getline(cin, name);
    if (name == "con.txt") {
        cout << "Impossibile scrivere nel file";
        return 1;
    } else if (name == "aux.txt") {
        cout << "Impossibile scrivere nel file";
        return 1;
    } else if (name == "prn.txt") {
        cout << "Impossibile scrivere nel file";
        return 1;
    } else if (name == "con") {
        cout << "Impossibile scrivere nel file";
        return 1;
    } else if (name == "aux") {
        cout << "Impossibile scrivere nel file";
        return 1;
    } else if (name == "prn") {
        cout << "Impossibile scrivere nel file";
        return 1;
    }
    ofstream file(name);
    cout << "inserisci del testo qui sotto plz e quando hai finito di scrivere premi invio plz pls plz pls" << endl;
    getline(cin, text);
    file << text;
    return 0;
}
