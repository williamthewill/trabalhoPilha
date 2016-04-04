// Copyright [2016] <William Müller>

#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T> class Pilha {
 private:
	/*
	 * declaração e atribuição da capaciadade maxima da pilha
	 * */
	int capacidade = 0;

	/*
	 * declaração do ponteiro
	 * */
	int ponteiro = -1;
	vector<T> pilha;

 public:
	// Construtor vazio
	Pilha() {
	}

	// construtor setando capacidade do vetor
	Pilha<T>(int capacidade) {
		this->capacidade = capacidade;
	}

	/*
	 * retorna capacidade da pilha
	 * */
	int getCapaciadade() {
		return capacidade;
	}

	/*
	 * função extra que exibe textualmente o tamanho da pilha
	 * */
	void tamanhoPilha() {
		cout << "O tamanho da pilha é de " << getCapaciadade() << endl;
	}

	/*
	 * Verifica se pilha atingiu sua capaciadade maxima
	 * */
	bool PilhaCheia() {
		bool returner = false;
		if (ponteiro == (capacidade - 1))
			returner = true;
		return returner;
	}

	/*
	 * Verifica se a pilha está vazia
	 * */
	bool PilhaVazia() {
		bool returner = false;
		if (ponteiro == -1)
			returner = true;
		return returner;
	}

	/*
	 * Adiciona elemento ao topo da pilha
	 * */
	void empilha(T dado) {
		if (PilhaCheia()) {
			throw "pilha cheia !!";
		}
		ponteiro++;
		pilha.push_back(dado);
	}

	/*
	 * Remove elemento do topo da pilha
	 * */
	T desempilha() {
		if (PilhaVazia()) {
			throw "A pilha está vazia";
		}
		ponteiro--;
		T topoAnt = pilha.back();
		pilha.pop_back();
		return topoAnt;
	}

	/*
	 * retorna o elemento contido no topo da pilha
	 * */
	T topo() {
		if (PilhaVazia()) {
			throw "A pilha está vazia";
		}
		return pilha.back();
	}

	/*
	 * retorna a posição do ultimo elemento da pilha
	 * */
	int getPosTopo() {
		if (PilhaVazia()) {
			throw "A pilha está vazia";
		}
		return ponteiro;
	}

	/*
	 * Desloca o topo da pilha para -1
	 * */
	void limparPilha() {
		if (PilhaVazia()) {
			throw "A pilha está vazia";
		}
		ponteiro = -1;
		pilha.empty();
	}
};
