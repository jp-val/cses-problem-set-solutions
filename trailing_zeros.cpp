// JP Valdespino

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
	int n;
	cin >> n;

	int ans{};

	for (int i = 5; i <= n; i*=5)
		ans += n/i;

	cout << ans << "\n";

	return 0;
}