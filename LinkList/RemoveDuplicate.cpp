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

// RemoveDuplicates in Sorted List
void RemoveDuplicates(){

	Node* curr = head;
	Node* nextNode;
	if(curr==NULL){
		return;
	}
	else{
		while(curr->next!=NULL){
			if(curr->val==curr->next->val){
				nextNode = curr->next->next;
				free(curr->next);
				curr->next = nextNode;
			}
			else{
				curr = curr->next;
			}
		}
	}
}
//RemoveDuplicate from Unsorted List
void RemoveDuplicatesUnsorted(){
	Node *ptr1,*ptr2,*dup;
	ptr1 = head;
	while(ptr1->next!=NULL&&ptr1!=NULL){
		ptr2 = ptr1;
		while(ptr2->next!=NULL){
			if(ptr2->next->val==ptr1->val){
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete(dup);
			}
			else{
				ptr2 = ptr2->next;
			}
		}
		ptr1=ptr1->next;
	}
}
int main(){

	int i=1;
	while(i<=10){
		int num;
	if(i>=1&&i<=3){
		num = 1;
	}
	else if(i>=4&&i<=6){
		num=4;
	}
	else if(i==9){
		num = 4;
	}
	else{
		num=i;
	}
		temp = new Node();
		if(temp=='\0'){
			cout<<"No Memory is Available";
			return 0;
		}
		else{
			temp->val = num;
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
		
		i++;
	}
	printData();
	RemoveDuplicates();
	printData();
	RemoveDuplicatesUnsorted();
	printData();
	return 0;
}

