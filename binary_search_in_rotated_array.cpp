// https://hack.codingblocks.com/app/contests/1179/p/433

#include<iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	int ele; cin >> ele;
	int start = 0;
	int end = n -1;
	while(start <= end)
	{
		int mid = (end - start)/2 + start;
		if(arr[mid] == ele)
		{
			cout << mid;
			break;
		}
		else if(arr[start] <= arr[mid])
		{
			if(arr[start] <= ele && ele <= arr[mid])
				end = mid -1;
			else
				start = mid + 1;
		}
		else
		{
			if(arr[mid] <= ele && ele <= arr[end])
				start = mid +1;
			else
				end = mid -1;
		}
	}
	return 0;
}
