#include <iostream>
#include <time.h>
#include <string>
#include <stdlib.h>
using namespace std;

int main () {

    srand(time(0));
    const int numerosecreto = rand()%100;
    double pontos = 1000.0;
    int chute;
    string mensagem;
    bool acertou = false;
    int tentativas = 0;
    char dificuldade;
    int limite = 0;
    cout << "********************************" << endl;
    cout << "Bem-vindo ao jogo da advinhacao!" << endl;
    cout << "********************************" << endl;
    cout << "Qual dificuldade voce vai jogar? (""F""-Facil) (""M""-Medio) (""D""-Dificil)" << endl;
    cin >> dificuldade;

    switch (tolower(dificuldade))
    {
    case 'f':
        limite = 14;
        break;
    case 'm':
        limite = 9;
        break;
    default:
        limite = 4;
    }
    
    do {
        tentativas++;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual e o seu chute?" << endl;
        cin >> chute;
        cout << "voce digitou o numero: " << chute << endl;
        
        if (numerosecreto == chute) {
            mensagem = "acertou!";
            acertou = true;
            break;
        }
        else {
            mensagem = "errou!";
            if (numerosecreto > chute) {mensagem += " O numero secreto e maior do que o seu chute!";}
            else {mensagem += " O numero secreto e menor do que o seu chute!";}
            pontos -= abs(chute - numerosecreto)/2.0;
            }
        
        cout << "Voce " << mensagem << endl;

    }
    while (!acertou && tentativas < limite);

    cout.precision(2);
    cout << fixed;
    cout << "O numero secreto era: " << numerosecreto << " e voce fez " << tentativas + 1 << " tentativas" << endl;
    cout << "Voce fez " << pontos << " pontos!" << endl;
    return 0;
}