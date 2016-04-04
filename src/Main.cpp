#include <iostream>
#include <string>

#include "Animal.cpp"
#include "Pilha.hpp"

using namespace std;

int main() {

	/*Pilha<int> numeros = Pilha<int>(10);

	 numeros.tamanhoPilha();

	 numeros.empilha(10);
	 numeros.empilha(0);
	 numeros.empilha(1);
	 numeros.empilha(2);
	 numeros.empilha(3);
	 numeros.empilha(4);
	 numeros.empilha(5);
	 numeros.empilha(6);
	 numeros.empilha(7);
	 numeros.empilha(8);

	 cout << "o que tem no topo " << numeros.topo() << endl;
	 cout << "posicao do topo " << numeros.getPosTopo() << endl;

	 numeros.desempilha();
	 cout << "o que tem no topo " << numeros.topo() << endl;
	 cout << "posicao do topo " << numeros.getPosTopo() << endl;

	 numeros.limparPilha();

	 cout << "posicao do topo " << numeros.getPosTopo() << endl;*/

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
	cout << "o que tem no topo " << anis.getPosTopo() << endl;

	return 0;
}
