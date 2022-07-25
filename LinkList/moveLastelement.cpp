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
void MoveLastElement(){
	ptr = head;
	while(ptr->next!=NULL){
		ptr=  ptr->next;
	}
	int v = head->val;
	head->val = ptr->val;
	ptr->val = v;
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
	MoveLastElement();
	printData();
	return 0;
}