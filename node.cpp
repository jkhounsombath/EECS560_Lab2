#include <iostream>

template <typename T>
Node<T>::Node()
{
	m_next= nullptr;
}

template <typename T>
Node<T>::Node(T entry)
{
	m_entry= entry;
	m_next= nullptr;
}

template <typename T>
Node<T>::Node(T entry, Node<T>* nextNode)
{
	m_entry= entry;
	m_next= nextNode;
}

template <typename T>
Node<T>::~Node()
{
}

template <typename T>
void Node<T>::setEntry(T entry)
{
	m_entry= entry;
}

template <typename T>
T Node<T>::getEntry() const
{
	return( m_entry );
}

template <typename T>
void Node<T>::setNext(Node<T>* nextNode)
{
	m_next= nextNode;
}

template <typename T>
Node<T>* Node<T>::getNext() const
{
	return ( m_next );
}
