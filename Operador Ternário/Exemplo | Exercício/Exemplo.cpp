// EXEMPLO DE OPERADOR TERNÁRIO
// PROGRAMA DE CALCULAR NOTA

#include <iostream>
using namespace std;

int main() {

	//declarando as variasveis que irão receber a notas
	int nota1, nota2, notaFinal;
	string resultado;

	//guardando a nota 1
	cout << "Digite a PRIMEIRA nota: ";
	cin >> nota1;


	//guardando a nota 2
	cout << "Digte a SEGUNDA nota: ";
	cin >> nota2;

	//obtendo a nota final
	notaFinal = nota1 + nota2;

	//INÍCIO DO OPERADOR TERNÁRIO
	(notaFinal >= 60) ? resultado = "APROVADO" : resultado = "REPROVADO";

	//Informando a situação do aluno
	cout << "\nO aluno está " << resultado << endl;

	return 0;
}
