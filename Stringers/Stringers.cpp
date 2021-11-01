#include "Stringers.h"
#include <iostream>

Stringers::Stringers(std::string&& name) {
	mem_Size = name.size();
	texto = new char[mem_Size+1];
	name.copy(texto, mem_Size, 0);
	texto[mem_Size] = '\0';

}
Stringers::~Stringers() {
	//delete texto;
}

char* Stringers::getValue() {
	return texto;
}

string Stringers::operator+(Stringers const& name) {
	uint32_t bufferSize = mem_Size + name.mem_Size;
	char* concatString = new char[bufferSize+1];

	for (int i = 0; i < mem_Size; i++) {
		concatString[i] = texto[i];
	}
	for (int i = 0; i < name.mem_Size; i++) {
		concatString[i + mem_Size] = name.texto[i];
	}
	concatString[bufferSize] = '\0';
	return concatString;
}

bool Stringers::operator==(std::string&& strToComp) {
	int ind = 0;
	while (texto[ind] == strToComp[ind] && (ind < strToComp.size() && ind < mem_Size)) {
		ind++;
	}

	if (ind < strToComp.size() || ind < mem_Size)
		return false;
	else
		return true;
}

int Stringers::lenght() {
	return mem_Size;
}

void Stringers::clear()
{
	free(texto);
}
