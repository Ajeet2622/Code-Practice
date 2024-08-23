#include<stdio.h>
#define v 8
void addEdge(int mat[v][v],int st,int ed){
	mat[st-1][ed-1] = 1;
	//mat[ed-1][st-1] = wt;
}

// void BFS(int mat[v][v],int start){
// 	int visited[v] = {0};
// 	int queue[v];
// 	int front = 0,rear =0;
// 	visited[start]=1;
// 	queue[rear++] = start;


// }


void BFS(int mat[v][v], int start) {
    int visited[v] = {0}; // To track visited vertices
    int queue[v]; // Queue for BFS
    int front = 0, rear = 0;

    visited[start-1] = 1;
    queue[rear++] = start-1;

    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current + 1);

        for (int i = 0; i < v; i++) {
            if (mat[current][i] != 0 && !visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }
}


void printArr(int mat[v][v]){
	for(int i = 0;i<v;i++){
		for(int j = 0; j < v;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}


int main(){
	int mat[v][v]={0};
	// addEdge(mat,1,2,5);
	// addEdge(mat,1,3,1);
	// addEdge(mat,1,4,3);
	// addEdge(mat,2,1,3);
	// addEdge(mat,2,3,3);
	// addEdge(mat,2,4,6);
	// addEdge(mat,3,2,9);
	// addEdge(mat,3,4,2);
	// addEdge(mat,4,2,9);
	// addEdge(mat,4,3,6);
	// addEdge(mat,4,1,7);

	// addEdge(mat,1,2,2);
	// addEdge(mat,1,3,3);
	// addEdge(mat,3,2,4);
	// addEdge(mat,3,4,7);
	// addEdge(mat,2,4,8);
	// addEdge(mat,4,1,4);

	addEdge(mat,1,2);
	addEdge(mat,1,3);
	addEdge(mat,1,4);
	addEdge(mat,2,5);
	addEdge(mat,3,6);
	addEdge(mat,3,5);
	addEdge(mat,4,7);
	addEdge(mat,5,8);
	addEdge(mat,7,8);
	// addEdge(mat,1,2,4);
	// addEdge(mat,1,3,4);
	// addEdge(mat,1,4,4);
	// addEdge(mat,2,5,4);
	// addEdge(mat,3,6,4);
	// addEdge(mat,3,5,4);
	// addEdge(mat,4,7,4);
	// addEdge(mat,5,8,4);
	// addEdge(mat,7,8,4);
	printArr(mat);

	//printArr(mat);
	printf("-------------\n");
	BFS(mat,5);//ele number 
	return 0;
}