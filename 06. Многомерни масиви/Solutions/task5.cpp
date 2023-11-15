#include <iostream>
using namespace std;

void spiralMatrix(int rows, int columns, int** matrix)
{
    int counter = 1;
    int startRow = 0, startColumn = 0, endRow = rows, endColumn = columns;

    while (startRow < endRow && startColumn < endColumn) {
        /* Print the first row from
               the remaining rows */
        for (int i = startColumn; i < endColumn; i++) {
            matrix[startRow][i] = counter++;
        }
        startRow++;

        /* Print the last column
         from the remaining columns */
        for (int i = startRow; i < endRow; i++) {
            matrix[i][endColumn - 1] = counter++;
        }
        endColumn--;

        /* Print the last row from
                the remaining rows */
        if (startRow < endRow) {
            for (int i = endColumn - 1; i >= startColumn; i--) {
                matrix[endRow - 1][i] = counter++;
            }
            endRow--;
        }

        /* Print the first column from
                   the remaining columns */
        if (startColumn < endColumn) {
            for (int i = endRow - 1; i >= startRow; i--) {
                matrix[i][startColumn] = counter++;
            }
            startColumn++;
        }
    }
}

void printMatrix(int rows, int columns, int** matrix) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[columns];
    }

    spiralMatrix(rows, columns, matrix);
    printMatrix(rows, columns, matrix);

    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
