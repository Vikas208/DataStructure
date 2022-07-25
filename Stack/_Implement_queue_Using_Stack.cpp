#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;

class Queue{

    private:
        stack<int> s1;
        stack<int> s2;
    public:
    void enqueue(int num){
        
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(num);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int dequeue(){
        if(s1.empty()){
            cout<<"QUEUE IS EMPTY"<<endl;
            exit(0);
        }
        int x = s1.top();
        s1.pop();
        return x;
    }
};
int main(){

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<"1st Element is: "<<q.dequeue()<<endl;
    cout<<"2st Element is: "<<q.dequeue()<<endl;
    cout<<"3st Element is: "<<q.dequeue()<<endl;
    
    return 0;
}
