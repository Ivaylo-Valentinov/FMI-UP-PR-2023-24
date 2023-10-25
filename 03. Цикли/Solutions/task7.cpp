#include <iostream>
#include <math.h>
using namespace std;

int main() {
	const float eps = 0.000001;
	unsigned int n;
	float x1, y1, r1, x2, y2, r2;

	cin >> n;

	if (n < 2)
	{
		cout << "need at least two circles";
		return 0;
	}

	cin >> x1 >> y1 >> r1;

	for (unsigned int i = 1; i < n; i++)
	{
		cin >> x2 >> y2 >> r2;
		float xDiff = x1 - x2;
		float yDiff = y1 - y2;

		float dist = sqrt(xDiff * xDiff + yDiff * yDiff);
		if (dist < eps) {
			if (abs(r1 - r2) < eps) {
				cout << "same" << endl;
			}
			else {
				cout << "no common points" << endl;
			}
		}
		else {
			if (abs(dist - r1 - r2) < eps || abs(dist - abs(r2 - r1)) < eps) {
				cout << "touching" << endl;
			}
			else {
				if (dist > r1 + r2 || dist < abs(r1 - r2)) {
					cout << "no common points" << endl;
				}
				else {
					cout << "intersecting" << endl;
				}
			}
		}
		x1 = x2;
		y1 = y2;
		r1 = r2;
	}

	return 0;
}
