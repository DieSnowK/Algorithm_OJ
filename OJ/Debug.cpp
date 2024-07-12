#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <climits>
using namespace std;

int main()
{
	int n = 0;
	string str1, str2;
	cin >> n >> str1 >> str2;

	vector<string> strs(n);
	for (int i = 0; i < n; i++)
	{
		cin >> strs[i];
	}

	if (str1.empty() && str2.empty())
	{
		cout << -1 << endl;
		return 0;
	}

	// Ë«Ö¸Õë
	int p1 = 0, p2 = 0, ret1 = 0, ret2 = 0, minDist = INT_MAX;
	bool flag1 = false, flag2 = false;

	while (p1 < n && p2 < n)
	{
		// ÕÒstr1
		while (p1 < n)
		{
			if (strs[p1] == str1)
			{
				flag1 = true;
				ret1 = p1++;
				break;
			}

			p1++;
		}
		if (flag1 && flag2)
		{
			minDist = min(minDist, abs(ret1 - ret2));
		}

		// ÕÒstr2
		while (p2 < n)
		{
			if (strs[p2] == str2)
			{
				flag2 = true;
				ret2 = p2++;
				break;
			}

			p2++;
		}
		if (flag1 && flag2)
		{
			minDist = min(minDist, abs(ret1 - ret2));
		}
	}

	cout << (minDist == INT_MAX ? -1 : minDist) << endl;

	return 0;
}