#include<stdio.h>

void createcompletegraph(int n);


int main(){
	createcompletegraph(4);

	return 0;
}
void createcompletegraph(int n){
	int **graph = (int **)malloc(n*sizeof(int *));

	for(int i=0; i<n; i++){
		graph[i] = (int *)malloc(n * sizeof(int));
	}
	
	for(int i=0; i<n;i++){
		for(int j = 0; j <n;j++){
			scanf("%d",&graph[i][j]);
		}
	}
	
	for(int i=0; i<n;i++){
		for(int j = 0; j <n;j++){
			printf("%d",graph[i][j]);
		}
	}

	printf("%d",graph[3][3]);
	
	for(int i=0;i<n;i++)
	free(graph[i]);
	free(graph);
}