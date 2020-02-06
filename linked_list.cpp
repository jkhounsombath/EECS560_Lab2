template <typename T>
linkedList<T>::linkedList()
{
	m_front= nullptr;
}

template <typename T>
linkedList<T>::~linkedList()
{
	Node<T>* temp= nullptr;
	while(m_front!= nullptr)
	{
		temp= m_front;
		m_front= m_front->getNext();
		delete temp;
	}
}

template <typename T>
bool linkedList<T>::isEmpty() const
{
	if (m_front == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <typename T>
int linkedList<T>::getLength() const
{
	int size= 0;
	Node<T>* front= m_front;
	while(front != nullptr)
	{
		size++;
		front= front->getNext();
	}
	return size;
}

template <typename T>
void linkedList<T>::insert(T newEntry, int index)
{
	if (index > 0 && index <= getLength()+1)
	{
		Node<T>* temp= nullptr;
		if (index == 1 && getLength() == 0)
		{
			m_front= new Node<T>(newEntry);
		}
		else if(index == 1 && getLength() > 0)
		{
			temp= new Node<T>(newEntry);
			temp->setNext(m_front);
			m_front= temp;
			temp= nullptr;
		}
		else
		{
			Node<T>* prevPtr= m_front;
			for(int i=1; i<index-1; i++)
			{
				prevPtr = prevPtr->getNext();
			}
			temp= new Node<T>(newEntry);
			temp->setNext(prevPtr->getNext());
			prevPtr->setNext(temp);
		}
	}
	else
	{
		std::cout<<"invalid position\n";
	}
}

template <typename T>
void linkedList<T>::removeFromList(T value)
{
	if(find(value))
	{
		int target= 0;
		Node<T>* front= m_front;
		for(int i=1; i<=getLength(); i++)
		{
			if(front->getEntry() == value)
			{
				target = i;
			}
			front= front->getNext();
		}
		remove(target);
	}
	else
	{
		std::cout <<"Value is not in the list\n";
	}
}

template <typename T>
void linkedList<T>::remove(int index)
{
	Node<T>* temp= nullptr;
	if (index > 0 && index <= getLength())
	{
		if (index == 1)
		{
			temp= m_front;
			m_front= m_front->getNext();
			delete temp;
		}
		else
		{
			Node<T>* prevPtr= m_front;
			temp= m_front;
			for(int i=1; i<index-1; i++)
			{
				prevPtr= prevPtr->getNext();
			}
			temp= prevPtr->getNext();
			prevPtr->setNext(temp->getNext());
			delete temp;
		}
	}
	else
	{
		std::cout<<"invalid position\n";
	}
}

template <typename T>
void linkedList<T>::deleteDuplicates()
{
	Node<T>* front= m_front;
	Node<T>* second= nullptr;
	Node<T>* deleteThis= nullptr;
	while (front != nullptr && front->getNext() != nullptr)
	{
		second = front;
		while (second->getNext() != nullptr)
		{
			if(front->getEntry() == second->getNext()->getEntry())
			{
				deleteThis= second->getNext();
				second->setNext((second->getNext())->getNext());
				delete deleteThis;
			}
			else
			{
				second= second->getNext();
			}
		}
		front= front->getNext();
	}		
}

template <typename T>
bool linkedList<T>::find(T value)
{
	Node<T>* front = m_front;
	while(front != nullptr)
	{
		if(front->getEntry() == value)
		{
			front = nullptr;
			return true;
		}
		else
		{
			front= front->getNext();
		}
	}
	return false;
}

template <typename T>
void linkedList<T>::FindNext(T value)
{
	Node<T>* front = m_front;
	while(front != nullptr)
	{
		if(front->getEntry() == value)
		{
			if(front->getNext() != nullptr)
			{
				std::cout<<"Here is the next value from " << value << ": " << (front->getNext())->getEntry() << "\n";
				return;
			}
			else
			{
				std::cout<<"The value is the last element in the list!\n";
				return;
			}
		}
		else
		{
			front= front->getNext();
		}
	}
	std::cout<<"The value is not in the list!\n";
}

template <typename T>
void linkedList<T>::print()
{
	Node<T>* front = m_front;
	std::cout << "Here is your linked list: ";
	while(front != nullptr)
	{
		std::cout << front->getEntry() << " -> ";
		front= front->getNext();
	}
	std::cout <<"NULL\n";
}
