// ConsoleApplication1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>

using namespace std;


void imprime(string s) {

    cout << s << endl;
}

void imprime(string s, int i) {

    cout<< s + " " + to_string(i)<< endl;
}

void imprime(int i,string s) {

    cout<< to_string(i)+ " " + s << endl;
}

int main()
{

    

        imprime("ola");
        imprime("a idade é: ", 25);
        imprime(100, "euros");
    
        return 11;
}

