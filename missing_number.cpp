// JP Valdespino

#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	ull n, value, sum{};
	cin >> n;

	for (ull i = 0; i < n-1; i++)
	{
		cin >> value;
		sum += value;
	}
	
	cout << (n * (n+1) / 2) - sum << "\n";

	return 0;
}