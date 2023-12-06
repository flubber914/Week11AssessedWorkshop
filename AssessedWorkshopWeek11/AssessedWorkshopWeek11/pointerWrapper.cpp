#include "pointerWrapper.h"

/// <summary>
/// print the smart pointer value
/// </summary>
/// <param name=""></param>
void pointerWrapper::print(void)
{
	cout << "Hi, I am a wrapped pointer with value: " << *p << endl;
}

/// <summary>
/// Constructor:
/// parse in integer and set unique pointer using make_unique to avoid the 'new' keyword
/// </summary>
/// <param name="_p"></param>
pointerWrapper::pointerWrapper(int _p)
{
	cout << "Allocating memory for int pointer" << endl;
	p = make_unique<int>(_p);
}

/// <summary>
/// call the destructor and let the smart pointer delete the memory
/// </summary>
pointerWrapper::~pointerWrapper()
{
	cout << "Releasing memory for int pointer" << endl;
}