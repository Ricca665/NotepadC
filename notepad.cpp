#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {
    string text;
    cout << "inserisci del testo qui sotto plz e quando hai finito di scrivere premi invio plz pls plz pls" << endl;
    getline(cin, text);
    ofstream file("notepad.txt");
    file << text;
    return 0;
}