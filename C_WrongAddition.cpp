#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
void solve()
{
	ll a, b, s;
	vector<int>ans;
	cin >> a >> s;
	bool flag = true;
	while (a || s)
	{
		ll k = a % 10;
		a /= 10;
		ll l = s % 10;
		s /= 10;
		if (k > l)
		{
			l = l + 10 * (s % 10);
			s /= 10;
			if (l<k || l>k + 9)
			{
				flag = false;
				break;
			}
			ans.push_back(l - k);
		}
		else
		{
			ans.push_back(l - k);
		}
	}
	if (!flag)
		cout << -1 << endl;
	else
	{
		ll res = 0;
		ll t = 1;
		for (auto x : ans)
		{
			res += x * t;
			t *= 10;
		}
		cout << res << endl;
 
		
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}