#include<iostream>
#include<string>

using namespace std;


string invertString(string s) {

	string tmp;

	for (int i = s.length()-1; i >= 0 ; i--)
	{
		tmp = tmp + s[i];
	}

	return tmp;
}

int main() {

	string exit = "exit";
	string input = "";
	string tmp;

	while (exit.compare(input) != 0){

		cout << "Insira uma palavra:" << endl;
		cin >> input;

		cout << "Pressione Enter para continuar...";
		cin.ignore(); // Limpa o buffer do teclado
		cin.get();    // Aguarda a tecla Enter ser pressionada

		tmp = invertString(input);
		cout << tmp << endl;

		if (tmp.compare(input)==0)
		{
			cout << "E um palindrome" << endl;
		}
		else
		{
			cout << "Normal" << endl;
		}

	}


	return 0;
}