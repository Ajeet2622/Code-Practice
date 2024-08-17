#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
	Node(int Data){
		data = Data;
		next = nullptr;

	}
};

Node* insertAtPos(Node* head,int pos,int data){
	if(head==nullptr)
	return head;
	Node* new_node = new Node(data);
	if(pos == 1){
		new_node->next = head;
		head = new_node;
		return head;
	}
	Node* curr = head;
	int i=1;
	while (i<pos-1)
	{
		if(curr==nullptr){
			cout<<"Invalid Position "<<curr->data;
			return head;
		}
		i++;
		curr = curr->next;
		/* code */
	}
	// if(curr=nu)

	new_node->next = curr->next;
	curr->next = new_node;
	return head;
}

void printList(Node* node){
	while(node!=nullptr){
		
		cout<<node->data<<" ";
		node = node->next;
	}
}
int main(){
	Node* head = new Node(5);
	head->next = new Node(8);
	head->next->next = new Node(6);
	head->next->next->next = new Node(12);
	head->next->next->next->next = new Node(7);
	head->next->next->next->next->next = new Node(3);
    printList(head);
	cout<<endl;
	head = insertAtPos(head,1,4);
	insertAtPos(head,3,78);
	printList(head);

	return 0;
}