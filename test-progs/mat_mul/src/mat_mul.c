#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>

#ifdef GEM5
#include "gem5/m5ops.h"
#endif

using namespace std;

// Function to multiply matrices A and B, store result in C
void multiply(const vector<vector<double>> &A, const vector<vector<double>> &B, vector<vector<double>> &C, int size) {
    for (int i = 0; i < size; i++) {
        for (int k = 0; k < size; k++) {
            for (int j = 0; j < size; j++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(const vector<vector<double>> &A, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << fixed << setprecision(3) << setw(8) << A[i][j] << "  ";
        }
        cout << endl;
    }
}

// Function to initialize matrices with random values
void initializeMatrices(vector<vector<double>> &A, vector<vector<double>> &B, vector<vector<double>> &C, int size) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0, 1);
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            A[i][j] = dis(gen);
            B[i][j] = dis(gen);
            C[i][j] = 0.0;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cerr << "Usage: mm size" << endl;
        return 1;
    }

    int size = atoi(argv[1]);
    if (size <= 0) {
        cerr << "Invalid size. Usage: mm size" << endl;
        return 1;
    }

    cout << "Initializing the matrices..." << endl;

    // Allocate matrices using vector
    vector<vector<double>> A(size, vector<double>(size));
    vector<vector<double>> B(size, vector<double>(size));
    vector<vector<double>> C(size, vector<double>(size, 0.0));

    // Initialize matrices
    initializeMatrices(A, B, C, size);

    cout << "Done." << endl;

    cout << "Beginning multiply..." << endl;
    auto start = chrono::high_resolution_clock::now();

#ifdef GEM5
    m5_work_begin(0, 0);
#endif

    multiply(A, B, C, size);

#ifdef GEM5
    m5_work_end(0, 0);
#endif

    auto end = chrono::high_resolution_clock::now();
    cout << "Done." << endl;

    double elapsed_time = chrono::duration<double, milli>(end - start).count();
    cout << "Time: " << elapsed_time << " ms" << endl;

    // Uncomment to print result matrix
    // printMatrix(C, size);

    return 0;
}
 
 
 
 
 
 
 
