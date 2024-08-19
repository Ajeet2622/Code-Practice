#include<stdio.h>

struct Node
{
	int vetex;
	struct Node* next;


};
struct AdjList
{
	struct Node* headd;
};

struct Graph
{
	int numV;
	struct AdjList* array;
};

struct Node* createNode(int vertex){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->vetex = vertex;
	newNode->next = NULL;
	return newNode;
}
struct Graph* createGraph(int vertex){
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
	graph->numV = vertex;
	graph->array = (struct AdjList*)malloc(vertex* sizeof(struct AdjList));

	for(int i=0; i<vertex;i++){
		graph->array[i].headd = NULL;
	}

	return graph;
}

void addEdge(struct Graph* graph, int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = graph->array[src].headd;
    graph->array[src].headd = newNode;
	graph->array[src].headd = newNode;
	// newNode->next = graph->array[src].headd;



newNode = createNode(src);

}
