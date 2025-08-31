#include <iostream>
#include <string>
#include <limits> // necessário para numeric_limits
using namespace std;

int main () {
    string mensagem;

    // se tiver usado cin >> antes, limpar buffer:
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    getline(cin, mensagem);  // lê a linha inteira (com espaços)

    cout << mensagem << endl;

    return 0;
}
