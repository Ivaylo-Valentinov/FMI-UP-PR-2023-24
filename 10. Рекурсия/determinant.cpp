#include <iostream>

double determinant(double** matrix, unsigned int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return matrix[0][0];
	if (n == 2)
		return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

	double** adjugate_matrix = new double* [n - 1];
	for (unsigned int i = 0; i < n - 1; i++) {
		adjugate_matrix[i] = new double[n - 1];
	}

	double sum = 0;
	for (unsigned int i = 0; i < n; i++) {
		double element = (i % 2 == 0 ? matrix[0][i] : -matrix[0][i]);
		for (unsigned int j = 0; j < n - 1; j++) {
			for (unsigned int k = 0; k < n; k++) {
				if (k < i) {
					adjugate_matrix[j][k] = matrix[j + 1][k];
				}
				else if (k > i) {
					adjugate_matrix[j][k - 1] = matrix[j + 1][k];
				}
			}
		}
		sum += element * determinant(adjugate_matrix, n - 1);
	}


	for (unsigned int i = 0; i < n - 1; i++) {
		delete[] adjugate_matrix[i];
	}
	delete[] adjugate_matrix;

	return sum;
}

int main() {
	unsigned int n;
	std::cin >> n;
	double** matrix = new double* [n];
	for (unsigned int i = 0; i < n; i++) {
		matrix[i] = new double[n];
		for (unsigned int j = 0; j < n; j++) {
			std::cin >> matrix[i][j];
		}
	}

	std::cout << determinant(matrix, n) << std::endl;

	for (unsigned int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}
