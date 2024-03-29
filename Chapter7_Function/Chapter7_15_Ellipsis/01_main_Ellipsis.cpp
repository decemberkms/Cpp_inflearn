#include <iostream>
#include <cstdarg>

using namespace std;

double findAverage(int count, ...)
{
	double sum = 0;

	va_list list;

	va_start(list, count);

	for (int arg = 0; arg < count; ++arg)
		sum += va_arg(list, int);

	va_end(list);

	return sum / count;
}


int main()
{
	cout << findAverage(5, 2, 3, 4, 5, 6) << endl;

	cout << findAverage(1, 2, 3, 4, 5, 6) << endl;

	cout << findAverage(10, 2, 3, 4, 5, 6) << endl;
	return 0;
}