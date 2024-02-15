#include<iostream>
#include<string>
#include<sstream>


using namespace std;

int main() {


    string nomeCompleto;

    // Pedir o nome completo do usuário
    cout << "Digite seu nome completo: ";
    getline(cin, nomeCompleto);

    for (size_t i = 0; i < nomeCompleto.length(); i++)
    {
        cout << nomeCompleto[i] << endl;
        cout << strcmp(&nomeCompleto[i],"\0")<<endl;
    }
 
    cout << nomeCompleto.length() << endl;

    // Usar stringstream para processar o nome completo
    stringstream ss(nomeCompleto);
    string nome;

    // Imprimir os vários nomes do usuário, cada um em uma linha diferente
    cout << "Nomes do usuário:" << endl;
    while (ss >> nome) {
        cout << nome << endl;
        // Verificar se o nome é "Silva"
        if (nome == "Silva") {
            cout << "Aviso: Conhecemos alguém com o nome \"Silva\"." << endl;
        }
    }

	return 0;
}