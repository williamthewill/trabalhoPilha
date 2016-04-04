#include <iostream>
#include <string>

using namespace std;

class Animal{
public:
	string nome;
	string tipo;

	Animal(){}
	Animal(string nome, string tipo){
		this->nome = nome;
		this->tipo = tipo;
	}
};
