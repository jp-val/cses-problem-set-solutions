// JP Valdespino

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

constexpr int MOD = 1e9 + 7;
constexpr int N = 1e6 + 1;

int main(int argc, char **argv)
{
	int n;
	cin >> n;

	ll dp[N];
	for (int i = 0; i <= n; i++)
		dp[i] = 0;
	
	dp[0] = 1;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= min(6, i); j++)
			dp[i] = (dp[i] + dp[i-j]) % MOD;

	cout << dp[n] << "\n";
	
	return 0;
}