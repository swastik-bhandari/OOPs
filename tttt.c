#include<stdio.h>

#define MAX_SIZE 10

void inputMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int *n1, int *m1, int *n2, int *m2);
void multiplyMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int n1, int m1, int n2, int m2, int result[][MAX_SIZE]);
void displayMatrix(int result[][MAX_SIZE], int n1, int m2);

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int n1, m1, n2, m2;

    // Input matrices
    inputMatrices(mat1, mat2, &n1, &m1, &n2, &m2);

    // Multiply matrices
    multiplyMatrices(mat1, mat2, n1, m1, n2, m2, result);

    // Display result
    displayMatrix(result, n1, m2);

    return 0;
}

void inputMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int *n1, int *m1, int *n2, int *m2) {
    printf("Enter the number of rows and columns for first matrix: ");
    scanf("%d %d", n1, m1);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < *n1; i++) {
        for (int j = 0; j < *m1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter the number of rows and columns for second matrix: ");
    scanf("%d %d", n2, m2);

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < *n2; i++) {
        for (int j = 0; j < *m2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
}

void multiplyMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int n1, int m1, int n2, int m2, int result[][MAX_SIZE]) {
    if (m1 != n2) {
        printf("Cannot multiply matrices: Number of columns of first matrix must be equal to number of rows of second matrix.\n");
        return;
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int result[][MAX_SIZE], int n1, int m2) {
    printf("Multiplied Matrix:\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
