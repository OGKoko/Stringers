#pragma once
#include <iostream>
using namespace std;

class Stringers
{
	char* texto;
	uint32_t mem_Size;

public:
	Stringers(string&& name);
	~Stringers();

	char* getValue();

	string operator+(Stringers const& name);

	bool operator==(std::string&& strToComp);

	int lenght();

	void clear();
};

