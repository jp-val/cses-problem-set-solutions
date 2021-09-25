// JP Valdespino

#include<bits/stdc++.h>
using namespace std;

constexpr int MOD = 1e9 + 7;

int main(int argc, char **argv)
{
	int n;
	cin >> n;
	
	int ans{ 1 };

	for (int i = 0; i < n; i++)
		ans = (ans * 2) % MOD;
	
	cout << ans << "\n";
	
	return 0;
}