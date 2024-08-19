#include<stdio.h>
#include<stdlib.h>

struct node
{
	int vertex;
	struct Node* next;
};

struct adjList
{
	struct node* head;
};

struct Graph
{
	int numVs;
	struct adjList* array;
};

struct Node* createNode(int vertex) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->vertex = vertex;
    newNode->next = NULL;
    return newNode;
}


struct Graph* createGraph(int Vertices){
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
	graph->numVs = Vertices;
	graph->array = (struct adjList*)malloc(Vertices*sizeof(struct adjList));


	for(int i=0; i<Vertices;i++){
		graph->array[i].head = NULL;
	}
	scrDest(graph);


	return graph;
}

void scrDest(struct Graph* graph){
	int edge;
	printf("Number of edges: ");
	scanf("%d",&edge);
	printf("Src dest\n");
	int src,dest;
	for(int i=0; i<edge;i++){
		scanf("%d %d",&src,&dest);
		addEdge(graph,src,dest);
		
	}
}


void addEdge(struct Graph* graph,int src,int dest){
	struct node* newNode = createNode(dest);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;


	newNode = createNode(src);
	newNode->next = graph->array[dest].head;
	graph->array[dest].head = newNode;
}


void printGraph(struct Graph* graph) {
    for (int v = 0; v < graph->numVs; v++) {
        struct node* pCrawl = graph->array[v].head;
        printf("\n Vertex %d\n: ", v);
        while (pCrawl) {
            printf("%d -> ", pCrawl->vertex);
            pCrawl = pCrawl->next;
        }
        printf("NULL\n");
    }
}

int main(){
	int numvtx;
	printf("enter Number Vertex: ");
	scanf("%d",&numvtx);
	// int edge;
	// printf("Number of edges: ");
	// scanf("%d",&edge);
	// printf("\nSrc dest\n");
	struct Graph* graph = createGraph(numvtx); 
	printGraph(graph);
	// int src,dest;
	// for(int i=0; i<edge;i++){
	// 	scanf("%d %d",&src,&dest);
	// 	cr
	// }
	return 0;
}