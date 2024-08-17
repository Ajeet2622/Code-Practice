#include<stdio.h>

struct Node{
	int data;
	struct Node* next;

};
struct Node* createNode(int data){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
struct Node* insertSfter(struct Node* head,int key,int newdata){
	struct Node* curr = head;
	while(curr!=NULL){
		if(curr->data==key)
		break;
		curr = curr->next;
	}

	if(curr==NULL)
	return head;

	struct Node* newNode = createNode(newdata);
	newNode->next = curr->next;
	curr->next = newNode;
	return head;

}
void printList(struct Node*node){
	while(node!=NULL){
		printf("%d ",node->data);
		node = node->next;
	}
}

int main(){
	struct Node* head = createNode(5);
	head->next = createNode(9);
	head->next->next =createNode(4);
	head->next->next->next = createNode(9);
	//printList(head);

	int key = 9;
	int newdata = 8;
	head = insertSfter(head,key,newdata);
	printList(head);
	return 0;
}