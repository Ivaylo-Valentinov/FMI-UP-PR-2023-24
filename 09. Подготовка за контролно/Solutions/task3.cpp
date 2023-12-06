#include <iostream>

int main() {
	size_t students, games;
	std::cin >> students >> games;

	int** stats = new int* [students];
	size_t* statsLength = new size_t[students];

	for (int i = 0; i < students; i++)
	{
		stats[i] = nullptr;
		statsLength[i] = 0;
	}

	for (size_t i = 0; i < games; i++)
	{
		size_t student;
		int points;
		std::cin >> student >> points;
		int* temp = new int[statsLength[student - 1] + 1];
		for (size_t j = 0; j < statsLength[student - 1]; j++)
		{
			temp[j] = stats[student - 1][j];
		}
		temp[statsLength[student - 1]++] = points;
		delete[]  stats[student - 1];
		stats[student - 1] = temp;
	}

	size_t index = 0;
	int max = 0;
	for (size_t i = 0; i < students; i++)
	{
		int tempSum = 0;
		for (size_t j = 0; j < statsLength[i]; j++)
		{
			tempSum += stats[i][j];
		}
		if (tempSum > max) {
			max = tempSum;
			index = i;
		}
	}

	std::cout << index + 1 << std::endl;

	for (size_t i = 0; i < statsLength[index]; i++)
	{
		std::cout << stats[index][i] << " ";
	}

	for (int i = 0; i < students; i++)
	{
		delete[] stats[i];
	}
	delete[] stats;
	return 0;
}
