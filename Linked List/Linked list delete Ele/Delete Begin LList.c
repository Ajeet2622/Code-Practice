#include<stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* createNode(int data){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->next =NULL;
	return new_node;
}


struct Node* deleteElementBegin(struct Node* head){
	if(head == NULL)
	return NULL;
	struct Node* temp = head;
	head = head->next;
	free(temp);
	return head;
}

void printList(struct Node* head){
	while (head!=NULL)
	{
		printf("%d ",head->data);
		head = head->next;
	}
	
}


int main(){

	//linked list first

	// struct Node* head = createNode(8);
	// head->next = createNode(9);
	// head->next->next = createNode(4);
	// head->next->next->next = createNode(7);
	// head->next->next->next->next = createNode(1);
	// printList(head);
	// printf("\n");
	// head = deleteElementBegin(head);
	// printList(head);



	// new linked list is created here i.e linked List 2
	struct Node* h1 =createNode(0);
	h1->next = createNode(1);
	h1->next->next = createNode(2);
	h1->next->next->next = createNode(3);
	printList(h1);

	return 0;
}