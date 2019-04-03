#pragma once

#include "squeue.hpp"

template <typename T>
void SQueue<T>::push(const T& val)
{
	push_stack.push(val);
}

template <typename T>
void SQueue<T>::fill_pop_stack()
{
	while (!push_stack.empty())
	{
		pop_stack.push(push_stack.top());
		push_stack.pop();
	}
}

template <typename T>
const T& SQueue<T>::front()
{
	if (pop_stack.empty())
		fill_pop_stack();

	return pop_stack.top();
}

template <typename T>
void SQueue<T>::pop()
{
	if (pop_stack.empty())
		fill_pop_stack();

	pop_stack.pop();
}

template <typename T>
bool SQueue<T>::empty() const
{
	return (push_stack.empty() && pop_stack.empty());
}

template <typename T>
int SQueue<T>::size() const
{
	return (push_stack.size() + pop_stack.size());
}

template <typename T>
SQueue<T>::~SQueue()
{
	while (!push_stack.empty())
	{
		push_stack.pop();
	}

	while (!pop_stack.empty())
	{
		pop_stack.pop();
	}
}