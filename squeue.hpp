#pragma once

#include <iostream>
#include <stack>

template <typename T>
class SQueue
{
public:
	~SQueue();
	void push(const T& val);
	const T& front();
	void pop();
	bool empty() const;
	int size() const;
private:
	std::stack<T> push_stack;
	std::stack<T> pop_stack;

	void fill_pop_stack();
};

