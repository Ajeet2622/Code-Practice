#include<stdio.h>

struct Node
{
	int numVertex;
	struct Node* next;
};

struct AdjList
{
	struct Node* adjnode;
};

struct Graph
{
	int numVertex;
	struct AdjList* array;
};



struct Node* createNode(int vertex){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->numVertex = vertex;
	newNode->next = NULL;
	return newNode;
}

struct Graph* createGraph(int vertices){
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
	graph->numVertex = vertices;
	graph->array = (struct AdjList*)malloc(vertices* sizeof(struct AdjList));
	for(int i =0 ;i<vertices;i++)
	  graph->array[i].adjnode = NULL;
	  srcDest(graph);
	  return graph;
}

void srcDest(struct Graph* graph){
	printf("Enter Numeber of Edges: ");
	int edges;
	scanf("%d ",&edges);
	int src,dest;
	for(int edge = 0;edge<edges;edge++){
		scanf("%d %d",&src,&dest);
		addEdge(graph,src,dest);

	}

}

void addEdge(struct Graph* graph,int src,int dest){
	struct Node* newNode = createNode(dest);
	newNode->next = graph->array[src].adjnode;
	graph->array[src].adjnode = newNode;
	// newNode->next = graph.array[src].head;
}



void printgraph(struct Graph* graph){
	for(int i=0; i<graph->numVertex;i++){
		struct Node* node = graph->array[i].adjnode;
		printf("\n vertex %d\n",i);
		while (node)
		{
			printf("%d ->",node->numVertex);
			node = node->next;
		}
		printf("\n");
		
	}
}


int main(){
	struct Graph* graph = createGraph(4);
	printgraph(graph);
	return 0 ;
}