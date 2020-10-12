#include <iostream>

using namespace std;

inline int sum(int x, int y)
{
	return x+y;
}

int main()
{
	int a = 2, b = 3;
	cout << sum(a, b) << endl;
	return 0;
}
