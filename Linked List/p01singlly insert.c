#include<stdio.h>
//#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};

struct Node* CreateNode(int new_data){
	struct Node* new_node =(struct Node*)malloc(sizeof(struct Node));
	(*new_node).data = new_data;
	(*new_node).next = NULL;
	return new_node;

}
struct Node* insertAtFront(struct Node* head,int new_data){
	struct Node* new_Node = CreateNode(new_data);
	(*new_Node).next = head;
	return new_Node;
}
void printList(struct Node* head){
	struct Node* curr = head;
	while (curr!=NULL)
	{
		printf(" %d",curr->data);
		curr = curr->next;
		/* code */
	}
	
}
int main(){

	//need inprove ment in next->next->next->next convet into single word
	struct Node* head = CreateNode(2);
	(*head).next = CreateNode(4);
	(*head).next->next = CreateNode(9);
	(*head).next->next->next = CreateNode(90);
	(*head).next->next->next->next = CreateNode(6);
	printList(head);

	return 0;
}