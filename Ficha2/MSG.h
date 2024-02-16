#pragma once

#include<string>
#include<sstream>
#include<iostream>

using namespace std;

class MSG
{
public:
	MSG(char l= 'x');
	string toString();
	void setLetra(char letra);
	~MSG();

	
private:
	char letra; 
	int inteiro;

	static int index;
};

