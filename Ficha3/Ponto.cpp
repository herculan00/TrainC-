#include "Ponto.h"


Ponto::Ponto(int x, int y) :x(x), y(y)
{
}

int Ponto::getX() const
{
	return x;
}

void Ponto::setX(int x)
{
	this->x = x;
}

int Ponto::getY() const
{
	return y;
}

void Ponto::setY(int y)
{
	this->y = y;
}

int Ponto::distancia(const Ponto& a) const
{
	return sqrt(pow((a.x - x), 2) + pow((a.y - y), 2));
}

string Ponto::toString() const
{
	stringstream ss;
	ss << "(" << x << "/" << y << ")";

	return ss.str();

}

Ponto::~Ponto()
{
}