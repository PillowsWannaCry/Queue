#include <iostream>
#include "queue.h"

using namespace std;

int main()
{

    Queue* s = new Queue();
    s->enQueue(1);
    s->enQueue(2);
    s->enQueue(3);
    s->enQueue(4);
    s->printQueue();
    cout << "\n";
    s->deQueue();
    s->deQueue();
    s->deQueue();
    s->printQueue();
    s->deQueue();
    cout << "\n";
    s->printQueue();
    return 0;
}
