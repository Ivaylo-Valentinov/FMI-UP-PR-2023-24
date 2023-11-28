#include <iostream>
#include <cstring>

int longestSubstring(const char* inputString, const char* substring, int& maxCount)
{
	if (inputString == nullptr || substring == nullptr)
		return -1;
	int lenInputString = strlen(inputString);
	int lenSubstring = strlen(substring);
	if (lenInputString < lenSubstring)
		return -1;

	int j = 1;
	int i = 0;
	int count = 0;
	int index = 0;
	maxCount = 0;
	int maxIndex = -1;
	bool flag = false;

	for (i = 0; i <= lenInputString - lenSubstring; i++)
	{
		count = 0;
		flag = false;
		if (inputString[i] == substring[0])
		{
			flag = true;
			index = i;
		}
		while (flag)
		{
			for (j = 0; j < lenSubstring; j++)
			{
				if (inputString[i + j] != substring[j])
				{
					flag = false;
					break;
				}
			}
			if (j == lenSubstring)
			{
				count += lenSubstring;
				if (count > maxCount)
				{
					maxIndex = index;
					maxCount = count;
				}
				i += lenSubstring;
				if ((i < lenInputString) && (inputString[i] == substring[0]))
				{
					flag = true;
				}
			}
		}
	}
	return maxIndex;
}

int main()
{
	const int STRING_INITIAL_SIZE = 100;
	char str[STRING_INITIAL_SIZE];
	char strSub[STRING_INITIAL_SIZE];
	std::cin.getline(str, STRING_INITIAL_SIZE);
	std::cin.getline(strSub, STRING_INITIAL_SIZE);
	int maxCount = 0;
	int index = longestSubstring(str, strSub, maxCount);
	std::cout << index << " " << maxCount << std::endl;
	return 0;
}
