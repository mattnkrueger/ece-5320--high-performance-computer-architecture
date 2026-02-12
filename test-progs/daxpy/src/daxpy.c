
/*#include <stdio.h>*/

#define N 100000

// DAXPY Function: Y = a * X + Y
void daxpy(int n, double a, double x[], double y[]) {
    for (int i = 0; i < n; i++) {
        y[i] = a * x[i] + y[i];
    }
}

int main() {
    double x[N], y[N];
    double a = 0.0; // Scaling factor
    int i;

    // Initialize arrays
    for (i = 0; i < N; i++) {
        x[i] = 1.0;
        y[i] = 1.0;
    }

    // Perform DAXPY
    daxpy(N, a, x, y);

 /*   // Print first 10 values of y
    for (i = 0; i < 10; i++) {
        printf("%f  ", y[i]);
    } */

    return 0;
}

 
 
 
 
 
 
 
