#ifndef QUEUE_H
#define QUEUE_H
#include "linkedlist.h"
class Queue
{
private: int nNum;
	   Linkedlist* linkedlist;
public:
	Queue();
	virtual ~Queue();
	void enQueue(int);
	int deQueue();
	void printQueue();
};
#endif // QUEUE_H
