#pragma once

template <typename T>
class Queue
{
public:
	virtual bool empty() const = 0;
	virtual const T& front() const = 0;
	virtual void makeEmpty() = 0;
	virtual void enqueue(const T& val) = 0;
	virtual void dequeue() = 0;
	virtual ~Queue(){}
};