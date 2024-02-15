#include<iostream>
#include<map>
#include<sstream>


using namespace std;



map<int, string> decimalToWord= {
{1, "um"}, { 2, "dois" }, { 3, "três" }, { 4, "quatro" }, { 5, "cinco" },
	{ 6, "seis" }, { 7, "sete" }, { 8, "oito" }, { 9, "nove" }, { 10, "dez" }
};


map<string, int> wordToDecimal = {

	{"um", 1}, {"dois", 2}, {"três", 3}, {"quatro", 4}, {"cinco", 5},
{"seis", 6}, {"sete", 7}, {"oito", 8}, {"nove", 9}, {"dez", 10}

};


int main() {

	string input;


	while (true)
	{
		cout << "Insira um numero ou um numero por extenso" << endl;
		getline(cin, input);


		if (input == "exit")
		{
			break;
		}

		if (isdigit(input[0]))
		{
			string tmp;
			int number;

			istringstream iss(input);

			if (iss >> number) {

				if (number >= 1 && number <= 10) {
					cout << decimalToWord[number] << endl;
				}
				else {
					cout << "Number out of valid range (1 to 10)." << endl;
				}
			}

		}
		else
		{
			string tmp;

		    istringstream iss(input);

			if (iss >> tmp) {


				if (wordToDecimal.find(tmp) != wordToDecimal.end()) {
					cout << wordToDecimal[tmp] << endl;
				}
				else {
					cout << "Invalid input." << endl;
				}

			}
			
		}


		cout << "Press Enter to continue...";
		cin.ignore();

	}

	




	return 0;
}