#include <stdio.h>
#include <stdlib.h>

#define MAX_N 20  // Maximum allowed board size

// Global board array
int board[MAX_N][MAX_N];

// Function to print the board solution
void printSolution(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}

// Check if it's safe to place a queen at board[row][col]
int isSafe(int N, int row, int col) {
    int i, j;

    // Check left side of current row
    for (i = 0; i < col; i++)
        if (board[row][i])
            return 0;

    // Check upper diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return 0;

    // Check lower diagonal on left side
    for (i = row, j = col; i < N && j >= 0; i++, j--)
        if (board[i][j])
            return 0;

    return 1;
}

// Util function to solve the N-Queens problem using backtracking
int solveNQUtil(int N, int col) {
    if (col >= N)
        return 1;

    for (int i = 0; i < N; i++) {
        if (isSafe(N, i, col)) {
            board[i][col] = 1;
            if (solveNQUtil(N, col + 1))
                return 1;
            board[i][col] = 0;  // Backtrack
        }
    }
    return 0;
}

// Solve the N-Queens problem
int solveNQ(int N) {
    if (!solveNQUtil(N, 0)) {
        printf("Solution does not exist for board size %d\n", N);
        return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int N = 8; // Default board size
    if (argc == 2) {
        N = atoi(argv[1]);
        if (N <= 0 || N > MAX_N) {
            fprintf(stderr, "Please provide a board size between 1 and %d\n", MAX_N);
            return 1;
        }
    }

    // Initialize board to 0
    for (int i = 0; i < MAX_N; i++)
        for (int j = 0; j < MAX_N; j++)
            board[i][j] = 0;

    if (solveNQ(N))
        printSolution(N);

    return 0;
}
 
 
 
 
 
 
