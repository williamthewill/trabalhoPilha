#include <iostream>
#include <string>

using namespace std;

template<typename T> class LinearStruct{
 public:
	bool isEmpity(int pointer){
		bool returner = false;
		if(pointer == -1)
			returner = true;
		return returner;
	}

	bool isFlow(int fullCapacity, int pointer){
		bool returner = false;
		if(isEmpity(pointer))
			throw "Structure linear empity";
		if(pointer == fullCapacity)
			returner = true;
		return returner;
	}

	int sizeStruct(int size){
		if(isEmpity())
			throw "Pilha vazia";
		return size;
	}
};
