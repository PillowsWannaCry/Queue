//queue.cpp
#include "queue.h"
#include "linkedlist.h"
#include <iostream>

using namespace std;

void Queue::enQueue(int x) {
    element* p = new element(x);
    this->linkedlist->InsertTail(p);
    this->nNum++;
}
int Queue::deQueue() {
    int p = this->linkedlist->Gethead()->Getdata();
    this->linkedlist->DeleteFirst();
    this->nNum--;
    return p;

}
void Queue::printQueue() {
    element* p = this->linkedlist->Gethead();
    if (p == nullptr)
    {
        cout << "QUEUE RONG, KHONG LAY DUOC PHAN TU";
    }
    else
    {
        while (p != nullptr) {
            cout << p->Getdata() << "\t";
            p = p->Getpointer();
        }
    }
}
Queue::Queue()
{
    //ctor
    this->nNum = 0;
    this->linkedlist = new Linkedlist();
}
Queue::~Queue()
{
    //dtor
}
