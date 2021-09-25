// JP Valdespino

#include<bits/stdc++.h>
using namespace std;

constexpr int di[] = { -1, 1, 0, 0 };
constexpr int dj[] = { 0, 0, -1, 1 };

constexpr int N = 1000;

char matrix[N][N];
int n{}, m{};

bool inBounds(int x, int y)
{
	return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y)
{
	matrix[x][y] = 'x';
	
	for (int i = 0; i < 4; i++)
		if (inBounds(x+di[i], y+dj[i]) && matrix[x+di[i]][y+dj[i]] == '.')
			dfs(x+di[i], y+dj[i]);
}

int main(int argc, char **argv)
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> matrix[i][j];

	int setcnt{};
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (matrix[i][j] == '.')
			{
				dfs(i, j);
				setcnt++;
			}

	cout << setcnt << "\n";
	return 0;
}