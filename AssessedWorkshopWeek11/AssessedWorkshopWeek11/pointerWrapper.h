#pragma once
#include <iostream>
using namespace std;

class pointerWrapper
{
public:
	void print(void);
private:
	int* p;
public:

	pointerWrapper(int _p);
	~pointerWrapper();

};


