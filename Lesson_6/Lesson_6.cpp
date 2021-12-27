#include<iostream>
#include "List.h"
#include "List.cpp"

int main()
{
	List<int> list;
	list.Add(5);
	list.Add(7);
	list.Add(10);

	Node<int>* tmpNode = &list.GetHead();
	while (tmpNode != nullptr)
	{
		cout << tmpNode->data << "\t";
		tmpNode = tmpNode->next;
	}
}
