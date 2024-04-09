#include "PQ.h"

PQ::PQ(int max)
{
	maxItems = max;
	items.elements = new int[max];
	length = 0;
}

// ---- destructor ---------------------------------------------
// Deletes the priority queue
PQ::~PQ()						// deletes the array, (items), not the pointer (elements)
{
	delete[]items.elements;
}
// -------------------------------------------------------------

// ---- makeEmpty ----------------------------------------------
void PQ::makeEmpty()
{
	length = 0;
}
// -------------------------------------------------------------

// ---- isEmpty ------------------------------------------------
bool PQ::isEmpty() const
{
	return (length == 0);
}
// -------------------------------------------------------------

// ---- isFull -------------------------------------------------
bool PQ::isFull()const
{
	return (length == maxItems);
}
// -------------------------------------------------------------

// ---- dequeue ------------------------------------------------
void PQ::dequeue(int& item)
{
    //cout << "<dequeuing>\n";
    if (length == 0)
        return;
    else
    {
        item = items.elements[0];
        items.elements[0] = items.elements[length - 1];
        length--;
        items.reheapDown(0, length - 1);
    }
    //cout << "<Finished>\n";
}
// -------------------------------------------------------------

// ---- enqueue ------------------------------------------------
void PQ::enqueue(int newItem)
{
    //cout << "<enqueing>\n";
    if (length == maxItems)
        return;
    else
    {
        length++;
        items.elements[length - 1] = newItem;
        items.reheapUp(0, length - 1);
    }
    //cout << "<Finished>\n";
}
// -------------------------------------------------------------
