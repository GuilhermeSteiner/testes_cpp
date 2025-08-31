#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Pessoa {

	private:

		string nome;
		int idade;
		string cidade;
		int empregado;

	public:

		Pessoa() {
			
			this->nome = "";
			this->idade = 0;
			this->cidade = "";
			this->empregado = 0;
		};

		Pessoa(string name, int age, string city, int working) {

        this->nome = name;
        this->idade = age;
        this->cidade = city;
        this->empregado = working;
    	}

		string getnome() {return this->nome;}
		void setnome(string name) {this->nome = name;}
		int getidade() {return this->idade;}
		void setidade(int age) {this->idade = age;}
		string getcidade() {return this->cidade;}
		void setcidade(string city) {this->cidade = city;}
		int getempregado() {return this->empregado;}
		void setempregado(int working) {this->empregado = working;}
			 

};


int main () {

	Pessoa x;
	cout << "Qual o seu nome? : ";
	string nome;
	getline(cin, nome);
	x.setnome(nome);
	int idade;
	cout << "Qual a sua idade? : ";
	cin >> idade;
	x.setidade(idade);
	string cidade;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Qual cidade voce mora? : ";
	getline(cin, cidade);
	x.setcidade(cidade);
	cout << "Voce trabalha? : ";
	int empregado;
	cin >> empregado;
	x.setempregado(empregado);

	cout << x.getnome() << endl;
	cout << x.getidade() << endl;
	cout << x.getcidade() << endl;
	cout << x.getempregado() << endl;
	
	

return 0;
}