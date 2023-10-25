#include <iostream>

int main()
{
	unsigned int perimeter;
	std::cin >> perimeter;
	unsigned int triangles = 0;

	for (unsigned int a = 1; a <= perimeter / 2; a++)
	{
		for (unsigned int b = a; b <= perimeter / 2; b++)
		{
			for (unsigned int c = b; c <= perimeter / 2; c++)
			{
				if (a + b + c == perimeter)
				{
					if (a + b > c && b + c > a && a + c > b)
					{
						triangles++;
					}
				}
			}
		}
	}

	std::cout << triangles << std::endl;
	return 0;
}
