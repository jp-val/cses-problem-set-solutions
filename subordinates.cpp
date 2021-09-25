// JP Valdespino

#include <bits/stdc++.h>
using namespace std;

constexpr int N = 2e5;

vector<int> g[N];
int subcnt[N];

int dfs(int src)
{
	for (int v: g[src])
		subcnt[src] += dfs(v) + 1;

	return subcnt[src];
}

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
	int n, p{};
	cin >> n;

	for (int i = 1; i < n; i++)
	{
		cin >> p;
		g[p-1].push_back(i);
	}

	dfs(0);

	for (int i = 0; i < n; i++)
		std::cout << subcnt[i] << ((i+1 < n) ? " " : "\n");
	
	return 0;
}