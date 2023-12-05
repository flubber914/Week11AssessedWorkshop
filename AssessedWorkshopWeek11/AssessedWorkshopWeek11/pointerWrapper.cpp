#include "pointerWrapper.h"

void pointerWrapper::print(void)
{
	cout << "Hi, I am a wrapped pointer with value: " << *p << endl;
}

pointerWrapper::pointerWrapper(int _p)
{
	cout << "Allocating memory for int pointer" << endl;
	p = &_p;
}

pointerWrapper::~pointerWrapper()
{
	cout << "Releasing memory for int pointer" << endl;
}
