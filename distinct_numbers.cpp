// JP Valdespino

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	int n, value;
	cin >> n;

	set<int> s;

	for (int i = 0; i < n; i++)
	{
		cin >> value;
		s.insert(value);
	}

	cout << s.size() << "\n";
	
	return 0;
}