// https://hack.codingblocks.com/app/contests/1179/p/439

// rotate each row and then take transpose 

// transpose of a matrix is all the above diagonal elements are swaped with below diagonal elements.

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

	int n; cin >> n;
	vector< vector<int> > arr(n, vector<int>(n));
	for(int i=0; i<n; i++)
		for(int j =0; j < n; j++)
			cin >> arr[i][j];
	 for(int i=0; i<n; i++)
	 	reverse(arr[i].begin(), arr[i].end());
	 for(int i=0; i<n; i++)
	 {
		for(int j=0; j < n; j++)
		{
			if(i < j)
				swap(arr[i][j], arr[j][i]);
		}
	 }
	 for(int i=0; i<n; i++)
	 {
		for(int j =0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;  
	}
	return 0;
}