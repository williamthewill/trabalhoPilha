// Copyright [2016] <William Müller>

#include <iostream>
#include <string>
#include <vector>
#include "LinearStruct.cpp"
using namespace std;

template<typename T> class Fila: public LinearStruct{
private:
	/*
	 * declaração e atribuição da capaciadade maxima da fila
	 * */
	int capacidade = 0;

	/*
	 * declaração do ponteiro
	 * */
	int ponteiro = -1;

	/*
	 * declara fila
	 * */
	T * fila;

public:
	// Construtor vazio
	Fila() {}
	Fila(): LinearStruct() {}
	// construtor setando capacidade do vetor
	Fila<T>(int capacidade) {
		this->capacidade = capacidade;
		fila = new T[capacidade];
	}

	/*
	 * retorna capacidade da fila
	 * */
	int getCapaciadade() {
		return capacidade;
	}

	/*
	 * função extra que exibe textualmente o tamanho da fila
	 * */
	void tamanhoFila() {
		cout << "O tamanho da fila é de " << getCapaciadade() << endl;

	}

	/*
	 * Verifica se pilha atingiu sua capaciadade maxima
	 * */
	bool FilaCheia() {
		bool returner = false;
		if (ponteiro == (capacidade - 1))
			returner = true;
		return returner;
	}

	/*
	 * Verifica se a pilha está vazia
	 * */
	bool FilaVazia() {
		bool returner = false;
		if (ponteiro == -1)
			returner = true;
		return returner;
	}

	void inclui(T dado) {
		if (FilaCheia())
			throw "Excedeu a capacidade da fila";
		fila[++ponteiro] = dado;
	}

	T retira() {
		if (FilaVazia())
			throw "fila vazia";
		for (int var = 0; var < ponteiro; ++var) {
			if (FilaVazia())
				throw "fila vazia";
			fila[var] = fila[var + 1];
		}
		return fila[--ponteiro];
	}

	/*
	 * retorna o elemento contido no topo da pilha
	 * */
	T ultimo() {
		if (FilaVazia()) {
			throw "A fila está vazia";
		}
		return fila[ponteiro];
	}

	T primeiro() {
		if (FilaVazia()) {
			throw "A fila está vazia";
		}
		return fila[0];
	}

	int getUltimo() {
		if (FilaVazia()) {
			throw "A fila está vazia";
		}
		return ponteiro;
	}

	/*
	 * Desloca o topo da fila para -1
	 * */
	void limparFila() {
		if (FilaVazia()) {
			throw "A fila já consta vazia";
		}
		ponteiro = -1;
	}
};
