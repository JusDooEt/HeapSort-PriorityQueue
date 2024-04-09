#pragma once
#include <iostream>
using namespace std;

class HeapType
{
public:
	HeapType();
	~HeapType();

	void reheapDown(int root, int bottom);
	void reheapUp(int root, int bottom);
	void swap(int& a, int& b);


	int* elements;
	int  numElements;
};

