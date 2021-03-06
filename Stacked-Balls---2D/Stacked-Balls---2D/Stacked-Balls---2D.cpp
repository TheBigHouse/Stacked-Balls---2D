// Stacked-Balls---2D.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;
double stack_height_2d(int layers)
{	
	if (layers <= 0) {
		return 0.0;
	}
	const double r = 0.5;
	double height = sqrt(((layers - 1) * 2 * r * (layers - 1) * 2 * r) - ((layers - 1) * 2 * r / 2 * (layers - 1) * 2 * r / 2)) + r * 2;
	stringstream ss;
	ss << fixed << setprecision(3) << height;
	ss >> height;
	return height;
}

int main()
{
	cout << stack_height_2d(56) << endl;
	system("pause");
    return 0;
}

