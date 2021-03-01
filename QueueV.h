#pragma once
#include <iostream>
#include <vector>
#ifndef QUEUEV
#define QUEUEV

using namespace std;

class QueueV 
{
private: 
	vector<int> V;
public:
	void Queue();
	~QueueV();
	bool empty();
	void enqueue(int e) ;// add element to back
	void dequeue() ; // removes element from the front
	int front(); // retrive value of element from front
	

	
};

#endif