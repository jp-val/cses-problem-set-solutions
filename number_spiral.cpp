// JP Valdespino

#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int

int main(int argc, char **argv)
{
	int t;
	cin >> t;

	ull x, y;
	
	for (int i = 0; i < t; i++)
	{
		cin >> x >> y;

		if (x < y)
		{
			if (y & 1)
				cout << (y*y) - x+1 << "\n";
			else
				cout << ((y-1) * (y-1)) + x << "\n";
		}
		else
		{
			if (x & 1)
				cout << ((x-1) * (x-1)) + y << "\n";
			else
				cout << (x*x) - y+1 << "\n";
		}
	}
	
	return 0;
}