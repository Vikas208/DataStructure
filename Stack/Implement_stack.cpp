#include <bits-stdc++.h>

#define MAX_SIZE 100

using namespace std;

class Stack
{

    int *stack;
    int top;
    int max;

public:
    Stack();
    void push(int val);
    void pop();
    int peek();
    bool isFull(int size);
    bool isEmpty(int size);
    int MaxElement();
};

Stack::Stack()
{
    top = -1;
    stack = new int(MAX_SIZE);
    max = INT_MIN;
}
bool Stack::isFull(int size)
{
    if (size == MAX_SIZE)
        return true;
    return false;
}
bool Stack::isEmpty(int size)
{
    if (size == -1)
        return true;
    return false;
}
void Stack::push(int val)
{
    if (isFull(top))
    {
        cout << "Stack is Full";
        return;
    }
    else
    {
        if (top == -1)
        {
            top++;
            stack[top] = val;
            max = val;
        }
        else
        {
            top++;
            if (max < val)
            {
                stack[top] = 2 * val - max;
                max = val;
            }
            else
            {
                stack[top] = val;
            }
        }
    }
}
void Stack::pop()
{
    if (isEmpty(top))
    {
        cout << "Stack is Empty";
    }
    else
    {
        int temp = stack[top];
        top--;
        cout << "Element Popped from the Stack" << endl;
        if (temp > max)
        {
            max = 2 * max - temp;
        }
    }
}
int Stack::peek()
{
    if (isEmpty(top))
    {
        cout << "Stack is Empty";
        return -1;
    }
    else
    {
        return stack[top];
    }
}
int Stack::MaxElement()
{
    if (isEmpty(top))
    {
        cout << "Stack is Empty";
        return -1;
    }
    return max;
}
int main()
{

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    cout << "Topped Element" << s.peek() << endl;
    cout << "Max Element is: " << s.MaxElement() << endl;
    return 0;
}