#include<stdio.h>
#define v 4
void addEdge(int mat[v][v],int st,int ed,int wt){
	mat[st-1][ed-1] = wt;
	//mat[ed-1][st-1] = wt;
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
	addEdge(mat,1,2,5);
	addEdge(mat,2,1,3);
	addEdge(mat,1,3,1);
	addEdge(mat,1,4,3);
	addEdge(mat,3,2,9);
	//addEdge(mat,2,3,3);
	addEdge(mat,2,4,6);
	addEdge(mat,4,2,9);
	addEdge(mat,3,4,2);
	addEdge(mat,4,3,6);
	addEdge(mat,4,1,7);
	printArr(mat);
	return 0;
}