#include<stdio.h>
struct Node{
	int data;
	struct Node* next;
};

struct Node* createnode(int data){
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data =data;
	new_node->next = NULL;
}

struct Node* insertAtPos(struct Node* head,int pos,int data){

	struct Node* newNode = createnode(data);
	if(pos==1){
		newNode->next = head;
		head = newNode;
		return head;
	}


	if(head == NULL)
	return head;
	struct Node* curr = head;
	int i = 1;
	while (i<pos-1)
	{
		i++;
		curr = curr->next;
	}

	if(curr==NULL){

		printf("Out of Bound Excess Element.");
		free(newNode);
		return head;

	}
	newNode->next = curr->next;
	curr->next = newNode;
	return head;
}

void printList(struct Node* node){
	while(node!=NULL){
		printf("%d ",node->data);
		node = node->next;
	}
}
int main(){
	struct Node* head = createnode(7);
	head->next = createnode(5);
	head->next->next =createnode(9);
	head->next->next->next =createnode(3);
	head->next->next->next->next =  createnode(2);
	printList(head);

	printf("\n");
	head = insertAtPos(head,2,6);
	printList(head);
	return 0;
}