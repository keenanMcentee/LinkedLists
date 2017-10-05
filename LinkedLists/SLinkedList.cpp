#include <iostream>
#include "SLinkedList.h"

using namespace std;

int main() {

	// Part 1: Demonstrate the very basic prinicpals of a linked list.

	// Create a list node (there is no list object).
	std::unique_ptr<SListNode<int>> p1 = std::make_unique<SListNode<int>>(3);
	// Create a second list node, and link the first node to the second.
	p1->setNext(std::make_unique<SListNode<int>>(4));
	// Loop through each node in the list.
	for (SListNode<int> *pCurrent = p1.get(); pCurrent != nullptr; pCurrent = pCurrent->next().get())
	{
		cout << (*pCurrent).element() << endl;
	}
	// Q: What happens if the next line is uncommented?
	//p1 = std::move(p1->next());

	// Part 2: Create a linked list using a list object.

	SLinkedList<int, SListIterator<int>> list;	
	list.insertLast(20);
	list.insertLast(10);
	list.insertLast(5);

	SListIterator<int> start = list.begin();
	
	cout << "First element: " << *start << endl;

	cout << list.size() << endl;
	
	system("PAUSE");
}
