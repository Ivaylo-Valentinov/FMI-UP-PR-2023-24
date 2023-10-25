#include <iostream>
#include <math.h>
using namespace std;

enum RelativePosition {
	NO_COMMON_POINTS,
	TOUCHING,
	INTERSECTING,
	SAME
};

RelativePosition findRelativePosition(float x1, float y1, float r1, float x2, float y2, float r2) {
	const float eps = 0.000001;

	float xDiff = x1 - x2;
	float yDiff = y1 - y2;

	float dist = sqrt(xDiff * xDiff + yDiff * yDiff);
	if (dist < eps) {
		if (abs(r1 - r2) < eps) {
			return SAME;
		}
		return NO_COMMON_POINTS;
	}
	if (abs(dist - r1 - r2) < eps || abs(dist - abs(r2 - r1)) < eps) {
		return TOUCHING;
	}
	if (dist > r1 + r2 || dist < abs(r1 - r2)) {
		return NO_COMMON_POINTS;
	}
	return INTERSECTING;
}

void printPosition(RelativePosition relatiove_position) {
	switch (relatiove_position)
	{
	case NO_COMMON_POINTS: cout << "no common points" << endl;
		break;
	case TOUCHING: cout << "touching" << endl;
		break;
	case INTERSECTING: cout << "intersecting" << endl;
		break;
	case SAME: cout << "same" << endl;
		break;
	}
}

int main() {
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
		printPosition(findRelativePosition(x1, y1, r1, x2, y2, r2));
		x1 = x2;
		y1 = y2; 
		r1 = r2;
	}

	return 0;
}
