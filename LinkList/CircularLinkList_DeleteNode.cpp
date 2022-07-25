#include<bits-stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
	Node(int n){
		data = n;
		next = NULL;
	}
};
void printList(Node *head){
	while(head->next!=head){
		cout<<head->data<<" ";
	}
	cout<<endl;
}
void DeleteNode(int key,Node **head){
	if(head==NULL){
		return;
	}
	if(head->data==key && head->next==NULL){
		free(head);
	}
	Node *curr = head;
	Node *pre = NULL;
	while(curr->next!=head){
		if(curr->data==key){
			
		}
	}
}
int main(){

	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head->next->next->next->next = new Node(50);
	head->next->next->next->next->next = head;	

	printList(head);
	DeleteNode(50,&head);
	printList(head);
	return 0;
}