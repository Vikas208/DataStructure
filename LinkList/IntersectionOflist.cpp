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
};
void Intersection(Node *first,Node *second){
    
    unordered_set<int> intersection;
    
    Node *fptr = first;
    Node *sptr = second;

    while(fptr!=NULL&&sptr!=NULL){
        if(fptr->val==sptr->val){
            if(intersection.find(fptr->val)==intersection.end()){
                intersection.insert(fptr->val);
            }
            fptr = fptr->next;
            sptr = sptr->next;
        }
        else if(fptr->val<sptr->val){
            fptr=fptr->next;
        }
        else{
            sptr = sptr->next;
        }
    }

    unordered_set<int>::iterator iter;
    for(iter=intersection.begin();iter!=intersection.end();++iter){
        cout<<(*iter)<<"\t";
    }
}
int main(){

    Node *firstList,*secondList;

    firstList = new Node(1);
    firstList->next = new Node(2);
    firstList->next->next = new Node(3);
    firstList->next->next->next = new Node(4);
    firstList->next->next->next->next = new Node(6);

    secondList =  new Node(2);
    secondList->next =  new Node(4);
    secondList->next->next =  new Node(6);
    secondList->next->next->next =  new Node(8);

    Intersection(firstList,secondList);
    return 0;
}