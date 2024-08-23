#include<stdio.h>

#define v 4

void addEdge(int mat[v][v],int i,int j){
	mat[i][j] = 1;

}

void printArr(int mat[v][v]){
	for(int i = 0; i<v ; i++){
		for(int j = 0; j<v; j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}
int main(){

	int mat[v][v]={0};
	//const int v=4;
	// int mat[v][v] = {
	// 	{1,1,0,0},
	// 	{1,0,0,1},
	// 	{1,0,1,0},
	// 	{0,1,1,1}
	// };
	addEdge(mat,0,1);
	addEdge(mat,0,2);
	addEdge(mat,0,3);
	addEdge(mat,1,2);
	addEdge(mat,1,3);
	addEdge(mat,2,3);
	addEdge(mat,3,0);
	printArr(mat);


	//  const int v = 4;
    // int mat[v][v] = {
    //     {0, 1, 0, 0},
    //     {1, 0, 0, 1},
    //     {1, 0, 1, 0},
    //     {0, 1, 1, 1}
    // };
// 	int matrix[3][4] = {
//     {1, 2, 3, 4},  // Row 1
//     {5, 6, 7, 8},  // Row 2
//     {9, 10, 11, 12}  // Row 3
// };
	return 0;
}