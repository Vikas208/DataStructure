#include<bits-stdc++.h>
#define ll long long
#define ul unsigned long long
using namespace std;

struct Node{
    int val;
    struct Node *next;
}*head,*temp,*ptr;

void printData(){
    ptr = head;
    while(ptr){
        cout<<ptr->val;
        ptr = ptr->next;
    }
    cout<<endl;
}
void AddOne(){
    int num=0;
    ptr = head;
    while(ptr){
        num = num*10+ptr->val;
        ptr = ptr->next;
    }
    num+=1000;
    int number=0;
    ptr=head;
    int length=0;
    while(num!=0){
        number = number*10+num%10;
        num/=10;
        length++;
    }  
    Node* prev = NULL;
    while(length>0){
        
        if(ptr!=NULL){
            ptr->val = number%10;
            prev = ptr;
            ptr = ptr->next;
        }
        else{
            temp = new Node();
            temp->val = number%10;
            temp->next = NULL;
            prev->next = temp;
            prev = temp;  
        }
        number/=10;
        length--;
    }
}
int main(){

    for(int i=7;i<=9;++i){
        temp = new Node();
        if(!temp){
            cout<<"No Memory"<<endl;
        }
        else{
            temp->val = i;
            temp->next = NULL;
            if(!head){
                head = temp;
                ptr = temp;
            }
            else{
                ptr->next = temp;
                ptr = temp;
            }
        }
    }
    printData();
    AddOne();
    printData();
    return 0;
}