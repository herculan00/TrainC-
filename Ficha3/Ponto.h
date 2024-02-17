#pragma once

#include <cmath>
#include <string>
#include <sstream>

using namespace std;

class Ponto
{
public:
	Ponto() = delete;
	Ponto(int x,int y);
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);
	int distancia(const Ponto &a) const;
	string toString() const;

	~Ponto();

private:
	int x, y;
};

