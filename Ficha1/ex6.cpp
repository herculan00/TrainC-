#include<iostream>


using namespace std;



void trocaReferencia(int &a, int &b) {

	int temp = a;
	a = b;
	b = temp;

	
}

void trocaPonteiros(int *a, int *b) {
	
	int temp = *a;
	*a = *b;
	*b = temp;
	
}

int main() {
	int a = 5, b = 10;
	trocaReferencia(a, b);
	//trocaPonteiros(&a, &b);
		cout << "\na = " << a << "\nb = " << b << endl;
} // aparece a = 10 e b = 5