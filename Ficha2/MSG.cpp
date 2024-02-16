#include "MSG.h"


int MSG::index = 0;

string MSG::toString() {
	stringstream ss;

	ss << "Letra: " << letra << "  Numero: " << inteiro;

	return ss.str();
}

MSG::MSG(char letra) :letra(letra),inteiro(++index)
{
	cout << "Criado: " << toString() << endl;
}

void MSG::setLetra(char letra) {
	this->letra = letra;
}

MSG::~MSG()
{
	cout << "Destruido: " << toString() << endl;
}




