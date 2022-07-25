#include<bits-stdc++.h>
using namespace std;

void swap(int *x,int *y);
class MinHeap{
private:	
	int *harr;
	int capacity;
	int head_size;
public:
	MinHeap(int capacity);
	void MinHeapify(int);
	int parent(int i){return (i-1)/2;}
	int left(int i){return (2*i+1);}
	int right(int i){return (2*i+2);}
	int extractMin();
	void decreasekey(int i,int new_val);
	int getMin(){return harr[0];}
	void deleteKey(int i);
	void insertKey(int k);
};
MinHeap::MinHeap(int capacity){
	this->head_size = 0;
	this->capacity = capacity;
	this->harr = new int[capacity];
}
void MinHeap::insertKey(int k){
	if(head_size==capacity){
		cout<<"\nOverFlow: could not insertKey\n";
		return;
	}	
	head_size++;
	int i = head_size -1;
	harr[i] = k;

	while(i!=0 && harr[parent(i)]>harr[i]){
		swap(&harr[i],&harr[parent(i)]);
		i = parent(i);
	}
}
void MinHeap::decreasekey(int i,int new_val){
	harr[i] = new_val;
	while(i!=0 && harr[parent(i)]>harr[i]){
		swap(&harr[i],&harr[parent(i)]);
		i = parent(i);
	}
}
int MinHeap::extractMin(){
	if(head_size<=0){
		return INT_MAX;
	}
	if(head_size==1){
		head_size--;
		return harr[0];
	}

	int root = harr[0];
	harr[0] = harr[head_size-1];
	head_size--;
	MinHeapify(0);

	return root;
}
void MinHeap::deleteKey(int i){
	decreasekey(i,INT_MIN);
	extractMin();
}
void MinHeap::MinHeapify(int i){
	int l = left(i);
	int r = right(i);
	int smallest = i;

	if(l<head_size && harr[l]<harr[i])
		smallest = l;
	if(r<head_size && harr[r]<harr[smallest])
		smallest = r;
	if(smallest!=i){
		swap(&harr[i],&harr[smallest]);
		MinHeapify(smallest);
	}
}
void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main(){

	MinHeap h(11);
	h.insertKey(3);
	h.insertKey(2);
	h.deleteKey(1);
	h.insertKey(15);
	h.insertKey(5);
	h.insertKey(4);
	h.insertKey(45);

	cout<<h.extractMin()<<" ";
	cout<<h.getMin()<<" ";
	h.decreasekey(2,1);
	cout<<h.getMin();

	return 0;
}