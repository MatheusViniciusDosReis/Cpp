#include <iostream>
using namespace std;

int main() {
	int entrada1, entrada2;
	bool condicao;

	cout << "Digite o primeiro numero: ";
	cin >> entrada1;
	cout << "Digite o segundo numero: ";
	cin >> entrada2;

	if(entrada2 != 0) {     //evitando a divisao por zero
		condicao = (entrada1 % entrada2 == 0) ? true : false;
	}
	else {
		cout << "Divisao por zero nao eh permitida" << endl;
	}

	if (condicao == true) {
		cout << entrada1 << " eh mutiplo de " << entrada2 << endl;
	}
	else {
		cout << entrada1 << " nao eh mutiplo de " << entrada2 << endl;
	}

	return 0;
}
