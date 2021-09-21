// JP Valdespino

#include<iostream>

using namespace std;

constexpr int inf = (int)1e9 + 7;

int main(int argc, char **argv)
{
	int n;
	cin >> n;

	int ans{ 1 };

	for (int i = 0; i < n; i++)
		ans = (ans * 2) % inf;
	
	cout << ans << "\n";
	
	return 0;
}