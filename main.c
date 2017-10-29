#include <stdio.h>

/**
 * This program allows the user to enter numbers for up to a 10x10
 * matrix and then shows them the transpose of that matrix.
 *
 * Reference: http://www.programmingsimplified.com/c-program-transpose-matrix
 * @return 0 - the exit code for the program
 */
int main()
{
    int m, n, c, d, matrix[10][10], transpose[10][10];

    printf("Enter the number of rows and columns of the matrix\n");
    printf("This program handles up to a 10 rows and 10 columns\n");
    scanf("%d%d", &m, &n);
    printf("You entered a size of %d rows and %d columns", m, n);

    if (m <= 10 && n <= 10) {
        printf("\nEnter the elements of matrix\n");
        for (c = 0; c < m; c++) {
            for (d = 0; d <  n; d++) {
                scanf("%d", &matrix[c][d]);
            }
        }

        printf("\nThe entered matrix is: \n");
        for (c = 0; c < n; c++) {
            for (d = 0; d < m; d++) {
                printf("%d\t", matrix[c][d]);
            }
            printf("\n");
        }

        for (c = 0; c < m; c++) {
            for (d = 0; d < n; d++) {
                transpose[d][c] = matrix[c][d];
            }
        }

        printf("Transpose of entered matrix : \n");
        for (c = 0; c < n; c++) {
            for (d = 0; d < m; d++) {
                printf("%d\t", transpose[c][d]);
            }
            printf("\n");
        }
    } else {
        printf("\nThe columns and rows cannot exceed 10.\n");
    }
    return 0;
}