

#include<iostream>

using namespace std;

int soma(int a = 1) {

	return a;
}

int soma(int a = 1, int b = 2) {

	return a+b;
}

int soma(int a = 1, int b = 2 , int c = 3) {

	return a+b+c;
}

int main() {

	//cout << "\n" << soma() << soma(1);
	//cout << soma(1, 2) << soma(1, 2, 3);
	
	// compilador n sabe que função usar pois todas funcionam com parametros por omissao 

	return 0;
}