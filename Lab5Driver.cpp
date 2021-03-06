// Lab5Driver.cpp
// Finley McIlwaine
// COSC2030 Lab5
// 10.22.18

#include "pch.h"
#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <list>
#include "Lab5MyStack.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stack;
using std::vector;
using std::list;

string stringReversal1(string& input);
string stringReversal2(string& input);
string stringReversal3(string& input);
string stringReversal4(string& input);

int main()
{
	string reversed;
	string input;

    // Testing stringReversal1
	cout << "\nTesting stringReversal1 (STL stack implementation):" << endl;
	input    = "Doggy";
	cout << "Input:  " << input << endl;
	reversed = stringReversal1(input);
	cout << "Output: " << reversed << endl << endl;

	// Testing stringReversal2
	cout << "Testing stringReversal2 (STL vector implementation):" << endl;
	input = "!dlroW ,olleH";
	cout << "Input:  " << input << endl;
	reversed = stringReversal2(input);
	cout << "Output: " << reversed << endl << endl;

	// Testing stringReversal3
	cout << "Testing stringReversal3 (STL list implementation):" << endl;
	input = "Lists, wow!";
	cout << "Input:  " << input << endl;
	reversed = stringReversal3(input);
	cout << "Output: " << reversed << endl << endl;

	// Testing stringReversal4
	cout << "Testing stringReversal4 (Custom MyStack implementation):" << endl;
	input = "My very own stack!";
	cout << "Input:  " << input << endl;
	reversed = stringReversal4(input);
	cout << "Output: " << reversed << endl << endl;
}

// This function reverses a string using the STL
// stack object.
string stringReversal1(string& input) {
	// Declare buffer stack and reversed string vars
	stack<char> buffer;
	string reversed;

	// Push input chars onto stack
	for (char& c : input)
	{
		buffer.push(c);
	}

	// Pop chars into reversed string
	while (!buffer.empty())
	{
		reversed += buffer.top();
		buffer.pop();
	}

	return reversed;
}

// This function reverses a string using the STL
// vector object.
string stringReversal2(string& input) {
	// Declare buffer vector and reversed string vars
	vector<char> buffer;
	string reversed;

	// Push input chars into vector
	for (char& c : input)
	{
		buffer.push_back(c);
	}

	// Pop chars into reversed string
	while (!buffer.empty())
	{
		reversed += buffer.back();
		buffer.pop_back();
	}

	return reversed;
}

// This function reverses a string using the STL
// list object.
string stringReversal3(string& input) {
	// Declare buffer list and reversed string vars
	list<char> buffer;
	string reversed;

	// Push input chars onto list
	for (char& c : input)
	{
		buffer.push_back(c);
	}

	// Pop chars into reversed string
	while (!buffer.empty())
	{
		reversed += buffer.back();
		buffer.pop_back();
	}

	return reversed;
}

// This function reverses a string using my own
// stack object.
string stringReversal4(string& input) {
	// Declare buffer stack and reversed string vars
	MyStack buffer;
	string reversed;

	// Push input chars onto stack
	for (char& c : input)
	{
		buffer.push(c);
	}

	// Pop chars into reversed string
	while (!buffer.isEmpty())
	{
		reversed += buffer.pull();
	}

	return reversed;
}