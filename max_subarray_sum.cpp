// https://hack.codingblocks.com/app/contests/1179/p/1259

#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int arr[n];
		for(int i=0; i<n; i++)
			cin >> arr[i];
		int max_sum = INT8_MIN;
		int curr_sum = INT8_MIN;
		for(int i=0; i<n; i++)
		{
			curr_sum = max(curr_sum+arr[i], arr[i]);
			max_sum = max(max_sum, curr_sum);
		}
		cout << max_sum << endl;
	}
	return 0;
}

