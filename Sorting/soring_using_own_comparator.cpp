// A C++ program to demonstrate STL sort() using our own comparator
#include <bits/stdc++.h>
using namespace std;

// An point has a start time and end time
struct point {
	int start, end;
};

// Compares two points according to starting times.
    //This “comparator” function returns a value; convertible to bool, which basically 
    //tells us whether the passed “first” argument should be placed before the passed 
    //“second” argument or not. 
bool comparepoint(point x, point y)
{
	return (x.start < y.start);
}
bool comparePointEndTime(point x, point y)
{
	return (x.end < y.end);
}

int main()
{
	point arr[]
		= { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + n, comparepoint);
	cout << "points sorted by start time : \n";
	for (int i = 0; i < n; i++)
		cout << "[" << arr[i].start << "," << arr[i].end
			<< "] ";

    sort(arr, arr + n, comparePointEndTime);
	cout << "\npoints sorted by End time : \n";
	for (int i = 0; i < n; i++)
		cout << "[" << arr[i].start << "," << arr[i].end
			<< "] ";

	return 0;
}
