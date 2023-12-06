#include <iostream>
#include <cassert>

bool areValidIndices(int row, int col, int rows, int cols) {
	return row >= 0 && row < rows&& col >= 0 && col < cols;
}

bool hasMarkedNeighbors(bool** markedCells, int rows, int cols, int row, int col) {
	for (int i = row -1; i <= row + 1; i++)
	{
		for (int j = col -1; j <= col + 1; j++)
		{
			if (areValidIndices(i, j, rows, cols) && markedCells[i][j]) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	int rows, cols, count = 0;
	std::cin >> rows >> cols;
	assert(rows > 0 && cols > 0);

	int** matrix = new int* [rows];
	bool** markedCells = new bool* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
		markedCells[i] = new bool[cols];
		for (int j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
			markedCells[i][j] = false;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix[i][j] == 0) continue;

			if (!hasMarkedNeighbors(markedCells, rows, cols, i, j)) {
				count++;
			}

			markedCells[i][j] = true;
		}
	}

	std::cout << count;

	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}
