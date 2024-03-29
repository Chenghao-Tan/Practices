﻿#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.setf(ios_base::showpoint);
	cout.precision(2);
	double x1, y1, x2, y2;
	while (cin >> x1 >> y1 >> x2 >> y2)
	{
		double result = (double)sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		cout << result << endl;
	}
}
