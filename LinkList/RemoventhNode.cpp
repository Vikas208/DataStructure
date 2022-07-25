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
int length(){
	ptr = head;
	int count=0;
	while(ptr!=NULL){
		count++;
		ptr = ptr->next;
	}
	return count;
}
void RemoveNode(int n){
	int len = length();
	Node* dup;
	len -= n;
	if(len<0||n>len){
		return;
	}
	if(len==0){
		dup = head;
		head = head->next;
		free(dup);
		return;
	}
	ptr=head;
	int count=0;
	while(ptr!=NULL){
		count++;
		if(count==len){
		
			dup = ptr->next;
			ptr->next = ptr->next->next;
			free(dup);
			break;
		}
		ptr = ptr->next;
	}
}
int main(){

	for(int i=1;i<=5;i++){

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
	RemoveNode(6);
	printData();
	return 0;
}