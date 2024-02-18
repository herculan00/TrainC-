#pragma once


#include <string>
#include <vector>
#include <sstream>
#include "Ponto.h"
#include "Figura.h"
#include <iostream> //for study purposes only

using namespace std;

class Triangulo : public Figura
{
public:
	Triangulo(const string& nome, const Ponto& p1, const Ponto& p2, const Ponto& p3);
	string toString() const;
	Ponto getVertice(int ordem) const;
	void setVertice(const Ponto& p, int ordem);

	~Triangulo();


private:
	vector<Ponto>vertices;
};

Triangulo::Triangulo(const string& nome, const Ponto& p1, const Ponto& p2, const Ponto& p3):Figura(nome),vertices({p1,p2,p3})
{
	cout << "Construido: " << toString() << endl;
}

 string Triangulo::toString() const
{
	 stringstream ss;

	 ss << "Triangulo " << Figura::getNome() << vertices[0].toString() << vertices[1].toString() << vertices[2].toString();

	 return ss.str();
}
  
 Ponto Triangulo::getVertice(int ordem) const
 {
	 if (ordem >= 0 && ordem < 3) {
		 return vertices[ordem];
	 }		 
	 else {
		 cerr << "Índice de vértice inválido." << endl;
		 exit(1);
	 }
 }

  void Triangulo::setVertice(const Ponto& p, int ordem)
 {
	  if (ordem >= 0 && ordem < 3) {
		   vertices[ordem] = p; 
	  }
	  else {
		  cerr << "Índice de vértice inválido." << endl;
		  exit(1);
	  }
 }

Triangulo::~Triangulo()
{
	cout << "Destruido: " << toString() << endl;
}