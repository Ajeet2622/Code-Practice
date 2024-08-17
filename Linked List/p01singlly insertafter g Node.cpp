#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node(int value){
		data = value;
		next = nullptr;
	}
};

Node* insertAfter(Node* head,int key,int newData){
	Node* curr =head;
	while (curr!=nullptr)
	{
		/* code */
		if(curr->data ==key)
		break;
		curr = curr->next;
	}

	if(curr == nullptr)
	return head;

	Node* newNode = new Node(newData);
	newNode->next = curr->next;
	curr->next = newNode;
	return head;
}

void printList(Node* node){
	while (node!=nullptr)
	{
		cout<< node->data <<" ";
		node = node->next;
	}
	
}


int main(){

	Node* head = new Node(9);
	head->next = new Node(7);
	head->next->next = new Node(6);
	head->next->next->next = new Node(1);
	printList(head);
	head = insertAfter(head,6,8);
	cout<<endl;
	printList(head);
	return 0;
}