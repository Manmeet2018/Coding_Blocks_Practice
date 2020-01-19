#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,m; cin >> n >> m;
	vector< vector<int> > arr(n, vector<int>(m));
	for(int i=0; i<n; i++)
		for(int j =0; j < m; j++)
			cin >> arr[i][j];
	int ele; cin >> ele;


	int i = 0;
	int j = m -1;
	while(i < n && j>=0)
	{
		if(arr[i][j] == ele)
		{
			cout << 1 << endl;
			return 0;
		}
		else
		{
			if(ele < arr[i][j])
				j--;
			else
				i++;
		}
	}
	cout << 0 << endl;
	return 0;
}
