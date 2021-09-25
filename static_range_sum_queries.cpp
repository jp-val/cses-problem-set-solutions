// JP Valdespino

#include <bits/stdc++.h>
using namespace std;

constexpr int N = 2e5 + 1;

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	unsigned long long int array[N];
	int n, q, a, b;

	cin >> n >> q;
	
	array[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> array[i];
		array[i] += array[i-1];
	}

	for (int i = 0; i < q; i++)
	{
		cin >> a >> b;
		cout << array[b] - array[a-1] << "\n";
	}

	return 0;
}