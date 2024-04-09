#pragma once
#include "HeapType.h"

class PQ
{
public:
	PQ(int);
	~PQ();

	void makeEmpty();
	bool isEmpty() const;
	bool isFull() const;
	void enqueue(int newItem);
	void dequeue(int& item);

private:
	int length;
	HeapType items;
	int maxItems;
};

