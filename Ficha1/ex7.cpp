#include<iostream>
#include<string>
#include<sstream>


using namespace std;

int main() {


    string nomeCompleto;

    // Pedir o nome completo do usu�rio
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

    // Imprimir os v�rios nomes do usu�rio, cada um em uma linha diferente
    cout << "Nomes do usu�rio:" << endl;
    while (ss >> nome) {
        cout << nome << endl;
        // Verificar se o nome � "Silva"
        if (nome == "Silva") {
            cout << "Aviso: Conhecemos algu�m com o nome \"Silva\"." << endl;
        }
    }

	return 0;
}