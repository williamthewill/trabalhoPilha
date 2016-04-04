#include <iostream>
#include <string>

#include "Animal.cpp"
#include "Pilha.hpp"
#include "Fila.hpp"

using namespace std;

int main() {

	Pilha<double> flu = Pilha<double>(10);
	flu.empilha(1.5);
	flu.empilha(5.5);
	cout << "o que tem no topo " << flu.topo() << endl;

	Pilha<char> car = Pilha<char>(10);
	car.empilha('a');
	car.empilha('b');
	cout << "o que tem no topo " << car.topo() << endl;

	Pilha<string> alfa = Pilha<string>(10);
	alfa.empilha("z");
	cout << "o que tem no topo " << alfa.topo() << endl;

	Animal gato("vine", "gato");
	Animal cao("doug", "cachorro");

	Pilha<Animal> anis = Pilha<Animal>(5);
	anis.empilha(gato);
	anis.empilha(cao);

	Animal seila = anis.topo();
	cout << "o que tem no topo " << seila.nome << endl;

	anis.limparPilha();
	try {
		cout << "o que tem no topo " << anis.getPosTopo() << endl;
	} catch (const char* e) {
		cerr << e << endl;
	}

	Pilha<int> numeros = Pilha<int>(10);

	numeros.tamanhoPilha();

	numeros.empilha(1);
	numeros.empilha(2);
	numeros.empilha(3);

	cout << "o que tem no topo " << numeros.topo() << endl;
	cout << "posicao do topo " << numeros.getPosTopo() << endl;

	numeros.desempilha();
	cout << "o que tem no topo " << numeros.topo() << endl;
	cout << "posicao do topo " << numeros.getPosTopo() << endl;

	numeros.limparPilha();

	try {
		cout << "posicao do topo " << numeros.getPosTopo() << endl;
	} catch (const char* e) {
		cerr << e << endl;
	}

	Fila<int> fbanco = Fila<int>(10);

	fbanco.inclui(12);
	fbanco.inclui(15);
	fbanco.inclui(40);
	fbanco.inclui(80);

	cout << fbanco.ultimo() << endl;
	cout << "posição do ultimo " << fbanco.getUltimo() << endl;

	try {
		fbanco.retira();
	} catch (const char* e) {
		cerr << e << endl;
	}
	cout << "apos retirar " << fbanco.ultimo() << endl;
	cout << "posição do ultimo apos retirar " << fbanco.getUltimo() << endl;

	cout << "posição do primeiro apos retirar " << fbanco.primeiro() << endl;

	return 0;
}
