// Lab5MyStack.h
// Finley McIlwaine
// COSC2030 Lab5
// 10.22.2018

#pragma once

#ifndef MY_STACK
#define MY_STACK

#include <vector>
#include <list>

using std::vector;
using std::list;

class MyStack
{
public:
	// Returns true if stack is empty, false otherwise
	bool isEmpty() const;

	// Pushes arguments onto stack
	void push(char &c);

	// Pops and returns elements off of stack
	char pull();

private:
	vector<char> elements;
};

#endif // !MY_STACK

