#include <iostream>
#include <string>
using namespace std;

class Pessoa {



public:
	string ler(string x) {
		
		cin >> x;
		return x;

		}
	void imprimir(string mensagem) {cout << mensagem << endl;}

};

int main () {

Pessoa scanner;
string msg;
scanner.imprimir(scanner.ler(msg));


return 0;
}