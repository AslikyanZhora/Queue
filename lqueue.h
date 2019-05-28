#pragma once

#include "queue.hpp"
#include <assert.h>

template <typename T>
class LQueue :public Queue<T>
{
public:
	bool empty() const;
	const T& front() const;
	void makeEmpty();
	void enqueue(const T& val);
	void dequeue();
	LQueue();
	~LQueue();
private:
	struct Node
	{
		T value;
		Node* next;
		Node(const T& val) :value(val), next(nullptr){}
	};
	Node* m_front;
	Node* m_back;
};

#include "lqueue.hpp"
