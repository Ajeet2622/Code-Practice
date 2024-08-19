#include <stdio.h>
#include <stdlib.h>

void createCompleteGraph(int n) {
    int **graph = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        graph[i] = (int *)malloc(n * sizeof(int));
    }

    // Initialize the graph with 1s for all edges except self-loops (0s)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                graph[i][j] = 0; // No self-loop
            } else {
                graph[i][j] = 1; // Edge between every pair of vertices
            }
        }
    }

    // Print the adjacency matrix
    printf("Adjacency Matrix of the Complete Graph:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(graph[i]);
    }
    free(graph);
}

int main() {
    int n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    createCompleteGraph(n);

    return 0;
}
