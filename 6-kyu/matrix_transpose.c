// https://www.codewars.com/kata/52fba2a9adcd10b34300094c

#include <stddef.h>

void transpose_matrix(
    size_t rows, size_t cols,
    const int matrix[rows][cols],
    int transpose[cols][rows])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];
    }
}