#pragma once
#include <iostream>

template<class T>
class myStack
{
public:
	myStack(int size);

	~myStack();

	void push(const T value);

	T pop();

private:
	T* stack;
	int count;
	int SIZE;
};

template<class T>
myStack<T>::myStack(int size)
{
	SIZE = size;
	count = -1;
	stack = new T[SIZE];
}

template<class T>
myStack<T>::~myStack()
{
	delete[] stack;
}

template<class T>
void myStack<T>::push(const T value)
{
	if (count == SIZE - 1)
	{
		throw std::runtime_error("Stack overflow.\n");
	}
	else
	{
		count++;
		stack[count] = value;
	}
}

template<class T>
T myStack<T>::pop()
{
	if (count < 0)
	{
		throw std::runtime_error("Stack is empty.\n");
		//return T();
	}
	return stack[count--];
}