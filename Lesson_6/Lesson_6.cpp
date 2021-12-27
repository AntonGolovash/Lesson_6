#include<iostream>
#include "List.h"
#include "List.cpp"

int main()
{
	List<int> list;
	list.Add(5);
	list.Add(7);
	list.Add(10);
	list.Add(55);
	list.Add(78);
	list.Add(100);

	Node<int>* tmpNode = &list.GetHead();
	while (tmpNode != nullptr)
	{
		cout << tmpNode->data << "\t";
		tmpNode = tmpNode->next;
	}
	cout << endl;
	list.Insert(255, 2);

	cout << endl;
	cout << "list.Insert(255, 2)" << endl;
	cout << endl;

	tmpNode = &list.GetHead();
	while (tmpNode != nullptr)
	{
		cout << tmpNode->data << "\t";
		tmpNode = tmpNode->next;
	}
	cout << endl;
	cout << list[2] << endl;

}
