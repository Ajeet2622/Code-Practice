#include<stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* createNode(int new_data){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = NULL;
	return new_node;
}
struct Node* insertAtEnd(struct Node* head ,int Data){
	if(head ==NULL)
	return head;

	struct Node* new_node = createNode(Data);

	struct Node* curr = head;
	while (curr->next!=NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
	return head ;
}

void printList(struct Node* head){
	while (head!=NULL)
	{
		printf("%d ",head->data);
		head = head->next;
	}
	
}
int main(){
	struct Node* head = createNode(4);
	head->next = createNode(8);
	head->next->next = createNode(7);
	head->next->next->next = createNode(9);
	printList(head);
	printf("\n");
	insertAtEnd(head,89);
	insertAtEnd(head,90);
	printList(head);

	return 0;
}