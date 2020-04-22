#ifndef _STACK_H_
#define _StACK_H_

#include "LinkedList.h"

template <typename T>
class Stack : public LinkedList<T> {
	public :
		Stack():LinkedList<T>() {}
		virtual bool Delete(T &element);
};

template <typename T>
bool Stack<T>::Delete(T &element)
{
	if( LinkedList<T>::first == 0 ) return false;
	Node<T> *tmp = LinkedList<T>::first;
	
	element = LinkedList<T>::first->data;
	LinkedList<T>::first = LinkedList<T>::first->link;
	delete tmp;
	LinkedList<T>::current_size--;
	return true;
}
#endif
