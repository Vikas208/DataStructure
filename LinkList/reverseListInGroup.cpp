#include<bits-stdc++.h>
using namespace std;

struct Node{
	int val;
	struct Node *next;
}*head,*temp,*ptr;

void printData(){
	ptr = head;
	while(ptr!='\0'){
		cout<<ptr->val<<"\t";
		ptr = ptr->next;
	}
	cout<<endl;
}
Node* Reverse(int k){
	Node* prev = NULL;
    Node* curr = head;
    Node* temp = NULL;
    Node* tail = NULL;
    Node* newHead = NULL;
    Node* join = NULL;
    int t = 0;

    while(curr){
    	t=k;
    	join = curr;
    	prev = NULL;

    	while(curr && t--){
    		temp = curr->next;
    		curr->next = prev;
    		prev = curr;
    		curr = temp;
    	}
    	if(!newHead){
    		newHead = prev;
    	}
    	if(tail){
    		tail->next = prev;
    	}
    	tail = join;
    }
    return newHead;
}
int main(){

	for(int i=1;i<=10;i++){

		temp = new Node();
		if(temp=='\0'){
			cout<<"No Memory is Available";
			return 0;
		}
		else{
			temp->val = i;
			temp->next='\0';
			if(head=='\0'){
				head = temp;
				ptr = head;
			}
			else{
				ptr->next = temp;
				ptr = temp;
			}
		}

	}
	printData();
	head = Reverse(4);
	printData();
	return 0;
}