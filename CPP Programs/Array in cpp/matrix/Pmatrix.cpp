#include<iostream>
using namespace std;
int main(){
	// int arr[4][]={{3,2,1,3},{6,4,2,9},{7,5,3,2},{8,5,1,0}};
	int matrix[][4] = {
    {1, 2, 3, 4},  // Row 1
    {5, 6, 7, 8},  // Row 2
    {9, 10, 11, 12}  // Row 3
};
cout<<sizeof(matrix)/sizeof(matrix[0][0])<<endl;
cout<<sizeof(matrix[0]);

	


	return 0;
}