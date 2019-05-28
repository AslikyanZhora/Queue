#pragma once

#include "lqueue.h"

template <typename T>
LQueue<T>::LQueue() :m_front(nullptr), m_back(nullptr)
{

}

template <typename T>
LQueue<T>::~LQueue()
{
	makeEmpty();
}

template <typename T>
const T& LQueue<T>::front() const
{
	assert(!empty());
	return m_front->value;
}

template <typename T>
void LQueue<T>::enqueue(const T& val)
{
	if (empty())
	{
		m_back = m_front = new Node(val);
	}
	else
	{
		m_back = m_back->next = new Node(val);
	}
}

template <typename T>
bool LQueue<T>::empty() const
{
	return (m_front == nullptr);
}

template <typename T>
void LQueue<T>::dequeue()
{
	assert(!empty());
	Node* temp = m_front;
	m_front = m_front->next;

	delete temp;
	temp = nullptr;
}

template <typename T>
void LQueue<T>::makeEmpty()
{
	while (!empty())
	{
		dequeue();
	}
}
