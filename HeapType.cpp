#include "HeapType.h"

HeapType::HeapType() 
{
	elements = nullptr;
	numElements = 0;
}

HeapType::~HeapType() {}

// ---- reheapUp -----------------------------------------------
//  Precondition:    bottom is the index of the node that may violate the heap order property
//  				The order property is satisfied from root to next-to-last node. 
//  Postcondition:  Heap order property is restored between root and bottom. 
// -------------------------------------------------------------
void HeapType::reheapUp(int root, int bottom)
{
	//cout << "<reheapUp>\n";
	int  parent;
	if (bottom > root)			// bottom and root are indexes (not values)
	{
		parent = (bottom - 1) / 2; 	// finds the index of parent of bottom
		if (elements[parent] < elements[bottom])  // Is bottom > parent
		{
			swap(elements[parent], elements[bottom]);	// If so, swap them
			reheapUp(root, parent);
		}
	}
	
	//cout << "<Finished>\n";
}

// ---- swap ---------------------------------------------------
void HeapType::swap(int& a, int& b)
{
	//cout << "<swapping " << a << " & " << b << ">\n";
	int temp;
	temp = a;
	a = b;
	b = temp;
	//cout << "<Finished>\n";
}
// -------------------------------------------------------------

// ---- reheapDown ---------------------------------------------
// Precondition:     root is the index of the node that may violate the heap order property. 
// Postcondition:   Heap order property is restored between root and bottom.
// -------------------------------------------------------------
// (Indexes of the root element [0] and bottom element  [length-1]
//    The root element changes with each recursive call
void HeapType::reheapDown(int root, int bottom)
{
	//cout << "<reheapDown>\n";
	int  maxChild;
	int  rightChild;
	int  leftChild;

	leftChild = root * 2 + 1;
	rightChild = root * 2 + 2;

	if (leftChild <= bottom)
	{
		if (leftChild == bottom)
			maxChild = leftChild;

		else
		{
			if (elements[leftChild] <= elements[rightChild])
				maxChild = rightChild;
			else
				maxChild = leftChild;
		}

		if (elements[root] < elements[maxChild])	// if root is < maxChild
		{
			swap(elements[root], elements[maxChild]);
			reheapDown(maxChild, bottom);
		}
	}
	//cout << "<Finished>\n";
}
// =============================================================
