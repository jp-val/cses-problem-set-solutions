// JP Valdespino

#include <iostream>

using namespace std;

constexpr int dx[] = { -1, 1, 0, 0 };
constexpr int dy[] = { 0, 0, -1, 1 };

constexpr int N = 1000;

char matrix[N][N];
int n{}, m{};

void display_matrix()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cout << matrix[i][j] << ((j+1) < m ? "" : "\n");
}

bool inBounds(int x, int y)
{
	return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y)
{
	matrix[x][y] = 'x';

	for (int i = 0; i < 4; i++)
		if (inBounds(x+dx[i], y+dy[i]) && matrix[x+dx[i]][y+dy[i]] == '.')
			dfs(x+dx[i], y+dy[i]);
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

	// display_matrix();

	cout << setcnt << "\n";

	return 0;
}