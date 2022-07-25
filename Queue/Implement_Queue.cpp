#include <bits-stdc++.h>
#define MAX_SIZE 100

using namespace std;
class Queue
{
private:
    int queue[MAX_SIZE];
    int front;
    int rear;

public:
    Queue();
    void enqueue(int val);
    int dequeue();
    bool isOverflow();
    bool isUnderflow();
};
Queue::Queue()
{
    front = -1;
    rear = -1;
}
bool Queue::isOverflow()
{
    if (rear == MAX_SIZE)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Queue::isUnderflow()
{
    if (front == rear)
        return true;
    else
        return false;
}
void Queue::enqueue(int val)
{
    if (isOverflow())
    {
        cout << "OverFlow" << endl;
    }
    else
    {
        rear++;
        queue[rear] = val;
    }
}
int Queue::dequeue()
{
    if (isUnderflow())
    {
        cout << "UnderFlow" << endl;
        return -1;
    }
    else
    {
        front++;
        return queue[front];
    }
}
int main()
{

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    return 0;
}