/*-- Queue.cpp-----------------------------------------------------------
   This file implements Queue member functions.
-------------------------------------------------------------------------*/

#include <iostream>
using namespace std;
#include "QueueV.h"
#include <vector>

//--- Definition of Queue constructor
void QueueV::Queue()
{
    int V=0;
}

QueueV::~QueueV()
{
    V.erase(V.begin());

}

//--- Definition of empty()
bool QueueV::empty() 
{
    if (V.size() == 0)
        return true;
    else
        return false;
}

//--- Definition of enqueue()
void QueueV::enqueue(int e)
{
    V.push_back(e);
}


//--- Definition of front()
int QueueV::front() 
{
    return V.front();
}

//--- Definition of dequeue()
void QueueV::dequeue()
{
    V.erase(V.begin());
}


