// JP Valdespino

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
	string s;
	cin >> s;
	
	vector<string> perms;
	sort(s.begin(), s.end());
	
	do
	{
		perms.push_back(s);
	}
	while (next_permutation(s.begin(), s.end()));

	cout << perms.size() << "\n";
	
	for (string p: perms)
		cout << p << "\n";

	return 0;
}