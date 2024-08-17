#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node (int new_data){
		data = new_data;
		next = nullptr;
	}
};

Node* insertAtFront(Node* head,int new_data){
	Node* new_node = new Node(new_data);
	new_node->next =head;
	return new_node;
}
void printList(Node* head){
	Node * curr = head;
	while (curr!=nullptr)
	{
		cout<< " "<<curr->data;
		curr = curr->next;
		/* code */
	}
	cout<<endl;
}

int main(){
	Node* head = new Node(3);
	head->next = new Node(8);
	head->next->next = new Node(6);
	head->next->next->next = new Node(7);
	head->next->next->next->next = new Node(9);
	
	printList(head);

	cout<<"After inserting Node\n";
	head = insertAtFront(head,5);
	printList(head);

	return 0 ;
}