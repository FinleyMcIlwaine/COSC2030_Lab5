// Lab5MyStack.cpp
// Finley McIlwaine
// COSC2030 Lab5
// 10.22.18

#include "pch.h"
#include "Lab5MyStack.h"

// Returns true if stack is empty, false otherwise
bool MyStack::isEmpty() const { return (elements.size() == 0) ? true : false; }

// Pushes arguments onto stack
void MyStack::push(char &c) { elements.push_back(c); }

// Pops and returns elements off of stack
char MyStack::pull() {
	char poppped = elements.back();
	elements.pop_back();
	return poppped;
}