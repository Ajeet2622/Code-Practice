#include<stdio.h>

struct Node{
	int data;
	struct Node* next ;
};

struct Node* createNode(int data){
	struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->next = NULL;
}


struct Node* removeEle(struct Node* head){
	// if(head == NULL)
	// return head;
	struct Node* curr = head;
	struct Node* pre = NULL;
	while(curr->next!=NULL){
		pre = curr;
		//printf("%d ",pre->data);
		curr = curr->next;
	}
	//printf("k = %d ",pre->data);
	//pre = NULL;
	//printf("%d ",pre->data);
	pre->next = NULL;
	free(curr);
	//free(pre);
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
	struct Node* head = createNode(6);
	head->next = createNode(9);
	head->next->next = createNode(7);
	printList(head);
	head = removeEle(head);
	printList(head);
	return 0;
}