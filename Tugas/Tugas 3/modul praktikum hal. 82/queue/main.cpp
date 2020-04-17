#include "queue.h"

int main()
{
    cout << "Hello world!" << endl;
    cout << "----------------------" << endl;
    cout << " H - T   | Queue Info " << endl;
    cout << "----------------------" << endl;
    Queue Q;
    infotype X;
    createQueue(Q);
    printInfo(Q);
    enqueue(Q, 5); printInfo(Q);
    enqueue(Q, 2); printInfo(Q);
    enqueue(Q, 7); printInfo(Q);
    X = dequeue(Q); printInfo(Q);
    X = dequeue(Q); printInfo(Q);
    enqueue(Q, 4); printInfo(Q);
    X = dequeue(Q); printInfo(Q);
    X = dequeue(Q); printInfo(Q);

    cout << endl << endl;

    cout << "Hello world!" << endl;
    cout << "----------------------" << endl;
    cout << " H - T   | Queue Info " << endl;
    cout << "----------------------" << endl;
    createQueue(Q);
    printInfo(Q);
    enqueueAlt2(Q, 5); printInfo(Q);
    enqueueAlt2(Q, 2); printInfo(Q);
    enqueueAlt2(Q, 7); printInfo(Q);
    X = dequeueAlt2(Q); printInfo(Q);
    X = dequeueAlt2(Q); printInfo(Q);
    enqueueAlt2(Q, 4); printInfo(Q);
    X = dequeueAlt2(Q); printInfo(Q);
    X = dequeueAlt2(Q); printInfo(Q);

    cout << endl << endl;

    cout << "Hello world!" << endl;
    cout << "----------------------" << endl;
    cout << " H - T   | Queue Info " << endl;
    cout << "----------------------" << endl;
    createQueue(Q);
    printInfo(Q);
    enqueueAlt3(Q, 5); printInfo(Q);
    enqueueAlt3(Q, 2); printInfo(Q);
    enqueueAlt3(Q, 7); printInfo(Q);
    X = dequeueAlt3(Q); printInfo(Q);
    X = dequeueAlt3(Q); printInfo(Q);
    enqueueAlt3(Q, 4); printInfo(Q);
    X = dequeueAlt3(Q); printInfo(Q);
    X = dequeueAlt3(Q); printInfo(Q);

    return 0;
}
