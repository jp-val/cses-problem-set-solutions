// JP Valdespino

#include <iostream>
#include <vector>

int dfs(std::vector<int> g[], int subcnt[], int src)
{
	for (int v: g[src])
		subcnt[src] += dfs(g, subcnt, v) + 1;

	return subcnt[src];
}

int main(int argc, char *argv[])
{
	int n;
	std::cin >> n;

	std::vector<int> *g{ new std::vector<int>[n]{} };
	int p{};

	for (int i = 1; i < n; i++)
	{
		std::cin >> p;
		g[p-1].push_back(i);
	}

	int *subcnt{ new int[n]{} };
	dfs(g, subcnt, 0);

	for (int i = 0; i < n; i++)
		std::cout << subcnt[i] << ((i+1 < n) ? " " : "\n");

	return 0;
}