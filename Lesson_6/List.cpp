#include "List.h"
using namespace std;

template<class T>
List<T>::List() : _head(nullptr), _tail(nullptr), _size(0)
{
	cout << "Constructor default:\t" << this << endl;
}

template<class T>
List<T>::~List()
{
	cout << "Destructor:\t" << this << endl;
	Clear();
}

template<class T>
void List<T>::Add(T data)
{
	++_size;
	Node<T>* tmp = new Node<T>;
	tmp->next = nullptr;
	tmp->data = data;

	if (_head == nullptr)
	{
		_head = _tail = tmp;
		return;
	}
	_tail->next = tmp;
	_tail = tmp;

}

template<class T>
void List<T>::Clear()
{

}

template<class T>
int List<T>::Getsize()
{
	return 0;
}

template<class T>
Node<T>& List<T>::GetHead()
{
	if (_head != nullptr)
		return *(_head);
	cout << "Is empty" << endl;
	return *(_head);
}

template<class T>
Node<T>& List<T>::GetTail()
{
	
}

template<class T>
inline void List<T>::Insert(T data, int index)
{
	if (_size <= index || index < 0)
	{
		throw std::bad_alloc();
	}
	Node<T>* newNode = new Node<T>;
	newNode->data = data;

	Node<T>* previous = _head;
	Node<T>* next = _head;

	while (index-- != 0)
	{
		previous = next;
		next = next->next;
	}
	previous->next = newNode;
	newNode->next = next;
	++_size;
}

template<class T>
inline void List<T>::Replace(T data, int Index)
{
}

template<class T>
inline void List<T>::Delete(int index)
{
}

template<class T>
inline T List<T>::operator[](int index)
{
	return T();
}

template<class T>
inline void List<T>::DeleteFirst()
{
}
