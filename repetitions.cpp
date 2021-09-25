// JP Valdespino

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv)
{
	string dna;
	cin >> dna;

	char c{ 'z' };
	int cnt{}, max{ 1 }, len = dna.size();
	
	for (int i = 0; i < len; i++)
	{
		if (dna[i] == c)
		{
			cnt++;
			max = ((cnt > max) ? cnt : max);
		}
		else
		{
			c = dna[i];
			cnt = 1;
		}
	}
	
	cout << max << "\n";
	
	return 0;
}