#pragma once
#include <iostream>
using namespace std;

class pointerWrapper
{
public:
	void print(void);
private:
	unique_ptr<int> p;
public:

	pointerWrapper(int _p);
	~pointerWrapper();

};


