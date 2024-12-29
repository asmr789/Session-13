#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100

void createMatrix(int rows, int cols, int matrix[MAX_ROWS][MAX_COLS]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Array [%d][%d]: ", i + 1, j + 1);
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

int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
    int matrix[MAX_ROWS][MAX_COLS];
    createMatrix(rows, cols, matrix);
    printf("Ma tran la:\n");
    printMatrix(rows, cols, matrix);
    return 0;
}

