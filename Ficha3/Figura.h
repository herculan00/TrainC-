#pragma once

#include <string>
#include <vector>
#include <sstream>
#include <iostream> //for study purposes only

using namespace std;

class Figura
{
public:
	Figura(const string& nome);
	string toString() const;
	string getNome() const;
	void setNome(const string& nome);
	~Figura();

private:
	string nome;
};

Figura::Figura(const string& nome):nome(nome)
{
	cout << "Construido: " << toString() << endl;
}

 string Figura::toString() const
{
	 stringstream ss;

	 ss << "Figura: " << nome;

	 return ss.str();
}

  string Figura::getNome() const
 {
	 return nome;
 }

   void Figura::setNome(const string& nome)
  {
	   this->nome= nome; 
  }

Figura::~Figura()
{
	cout << "Destruido: " << toString() << endl;
}