#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    if (rows > MAX_ROWS || cols > MAX_COLS) {
        printf("Error: Maximum size exceeded.\n");
        return 1;
    }
    int matrix[MAX_ROWS][MAX_COLS];
    createMatrix(rows, cols, matrix);
    printf("The matrix is:\n");
    printMatrix(rows, cols, matrix);
    return 0;
}

void createMatrix(int rows, int cols, int matrix[MAX_ROWS][MAX_COLS]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int rows, int cols, int matrix[MAX_ROWS][MAX_COLS]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}