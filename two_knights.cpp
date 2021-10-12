// JP Valdespino

#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int

int main(int argc, char **argv)
{
	int n;
	cin >> n;

	for (int k = 1; k <= n; k++)
	{
		ull ans = (ull)(k*k) * (k*k-1) / 2;
		ans -= 4 * (k-1) * (k-2);
		cout << ans << "\n";
	}

	return 0;
}