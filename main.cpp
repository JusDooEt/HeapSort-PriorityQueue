
#include "PQ.h"
using namespace std;

#define MAX_ITEMS 5

int main()
{
	int item;
	PQ queue(MAX_ITEMS);

	queue.makeEmpty();

	cout << "Enter values into the Priority Queue:\n";

	if (!queue.isFull())
	{
		for (int i = 0; i < MAX_ITEMS; i++)
		{
			cin >> item;
			queue.enqueue(item);
		}
		cin.ignore();
	}
	else
		cout << "Queue is full!\n\n";

	cout << "\n\nThe contents of the Priority Queue\n"
		<< " based on removing the highest value:\n";
	
	while (!queue.isEmpty())
	{
		queue.dequeue(item);
		cout << item << "-->";
	}
	cout << "NULL\n\n";

	system("pause");
	return 0;
}
