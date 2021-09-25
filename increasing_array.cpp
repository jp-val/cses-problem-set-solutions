// JP Valdespino

#include <bits/stdc++.h>
using namespace std;

constexpr int N = 2e5;

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int array[N], n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> array[i];

	unsigned long long int moves{};

	for (int i = 1; i < n; i++)
		if (array[i] < array[i-1])
		{
			moves += array[i-1] - array[i];
			array[i] = array[i-1];
		}
	
	cout << moves << "\n";
	
	return 0;
}