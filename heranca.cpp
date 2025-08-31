#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Pessoa {

    private:

        string nome;
        int idade;
        string cidade;
    
    public:

        Pessoa() {nome = ""; idade = 0; cidade = "";}
        Pessoa(string name, int age, string city) {nome = name; idade = age; cidade = city;}

        void afirmacao () const {cout << "Sou um ser humano, acima de tudo" << endl;}

        virtual string getnome() const = 0;
        virtual void setnome(string name) = 0;
        virtual int getidade() const = 0;
        virtual void setidade(int age) = 0;
        virtual string getcidade() const = 0;
        virtual void setcidade(string city) = 0;

};

class Diogo : public Pessoa {

    private:
        string nome;
        int idade;
        string cidade;

    public:

        Diogo(string name, int age, string city) : Pessoa(name, age, city), nome(name), idade(age), cidade(city) {}
        Diogo() : Pessoa(), nome(""), idade(0), cidade("") {}

        string getnome() const override {return nome;}
        void setnome(string name) override {nome = name;}
        int getidade() const override {return idade;}
        void setidade(int age) override {idade = age;}
        string getcidade() const override {return cidade;}
        void setcidade(string city) override {cidade = city;}

};

int main () {
    cout << "Qual e o seu nome? :";
    Diogo diggo;
    string name;
    getline(cin, name);
    diggo.setnome(name);
    cout << "Qual é a sua idade? :";
    int age;
    cin >> age;
    diggo.setidade(age);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Qual cidade voce mora? :";
    string city;
    getline(cin, city);
    diggo.setcidade(city);

    cout << "Olá " << diggo.getnome() << " de " << diggo.getidade() << ", morador de " << diggo.getcidade() << endl;
    diggo.afirmacao();
    
    return 0;
}