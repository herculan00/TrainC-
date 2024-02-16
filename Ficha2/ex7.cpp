#include<string>
#include<sstream>
#include<iostream>
#include"MSG.h"

using namespace std;


int main() {

	MSG a('a');
	MSG b;
	MSG& c = b;
	MSG d = b;
	d.setLetra('d');
	//MSG msgs[2];

	


	cout << "Presione enter para continuar..." << endl;
	cin.ignore();



}