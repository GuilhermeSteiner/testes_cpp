#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main () {
    int idade;
    string msg;
    cout << "Qual é o seu nome?";
    getline(cin, msg);
    cout << "Qual é a sua idade? ";
    cin >> idade;
    cout << "Olá " << msg << " de " << idade << " anos!" << endl;
    return 0;
}