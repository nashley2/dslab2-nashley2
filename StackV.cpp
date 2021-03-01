#include "StackV.h"
#include <stack>
//first in first out



StackV::StackV()
{
	int S = 0;
}

StackV::~StackV()
{
	S.erase(S.begin());

}

bool StackV::empty()
{
	if (S.size() == 0)
	{
		return true;
	}
	else
		return false;
}

void StackV::pop()
{
	S.pop_back();
}



void StackV::push(int e)
{
	S.push_back(e);
}

void StackV::size()
{
	long n = S.size();
	for (int i = 0; i < n; i++)
		cout << S[i] << "\n";
}

int StackV::top()
{
	return S.back();
}


void print_vector_reverse(vector<int> S) 

{
	long n = S.size();
	for (long i = n - 1; i >= 0; i--)
		cout << S[i] << ",";
	cout << "\n";
}

void StackV::display()
{
	
	print_vector_reverse(S);
}