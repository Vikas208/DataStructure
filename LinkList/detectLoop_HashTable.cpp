#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long

using namespace std;
struct Node{
    int val;
    struct Node *next;

    Node(int num){
        val = num;
        next = NULL;
    }
}*head,*ptr;

bool DetectLoop(){
    unordered_set<Node*> list;
    ptr = head;
    while(ptr!=NULL){
        if(list.find(ptr)!=list.end()){
            return true;
        }
        list.insert(ptr);
        ptr = ptr->next;
    }
    
    return false;
}
int countNodes(Node *slow){
    ptr = slow;
    int len=1;
    while(ptr->next!=slow){
        len++;
        ptr = ptr->next;
    }
    return len;
}
void LoopLength(){
    Node *slow = head;
    Node *fast = head;

    while(slow && fast &&fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow==fast){
            cout<<"Length is: "<<countNodes(slow);
            break;
        }
    }
}
int main(){

    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = head->next->next->next;

    if(DetectLoop()){
        cout<<"Loop is Exist"<<endl;
    }
    else{
        cout<<"Loop is Not Exist"<<endl;
    }
    LoopLength();
    return 0;
}