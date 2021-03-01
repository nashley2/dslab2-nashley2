#pragma once
#include <iostream>
#include <vector>
#ifndef STACKV
#define STACKV
using namespace std;

class StackV
{

private:
	vector<int> S;
public:
	StackV();
	~StackV();
	bool empty();
	void pop();

	void push(int e);
	
	void size();
	
	int top();
	void display();



};

#endif