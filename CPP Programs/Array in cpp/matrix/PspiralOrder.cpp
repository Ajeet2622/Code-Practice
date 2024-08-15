#include<iostream>
using namespace std;

int main(){
    int arr[][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    // int arr[][5] = {
    //     {1,2,3,4,5},
    //     {4, 3, 6, 4, 2},
    //     {4, 0, 2, 4, 14},
    //     {4, 3, 67, 4, 2},
    //     {4, 3, 9, 7, 5}
    // };
    
    int row = sizeof(arr)/sizeof(arr[0]);
    int col = sizeof(arr[0])/sizeof(arr[0][0]);

    int rst = 0, ren = row - 1;
    int cst = 0, ced = col - 1;

    while (rst <= ren && cst <= ced) {
        // Print the top row
        for (int j = cst; j <= ced; j++) {
            cout << arr[rst][j] << " ";
        }
        rst++;

        // Print the right column
        for (int i = rst; i <= ren; i++) {
            cout << arr[i][ced] << " ";
        }
        ced--;

        // Print the bottom row, if there are still rows remaining
        if (rst <= ren) {
            for (int j = ced; j >= cst; j--) {
                cout << arr[ren][j] << " ";
            }
            ren--;
        }

        // Print the left column, if there are still columns remaining
        if (cst <= ced) {
            for (int i = ren; i >= rst; i--) {
                cout << arr[i][cst] << " ";
            }
            cst++;
        }
    }

    return 0;
}
