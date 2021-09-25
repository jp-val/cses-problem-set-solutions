// JP Valdespino

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
	unsigned long long int n;
	cin >> n;
	
	cout << n;

	while (n > 1)
	{
		if (n%2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		
		cout << " " << n ;
	}
	
	cout << "\n";
	return 0;
}