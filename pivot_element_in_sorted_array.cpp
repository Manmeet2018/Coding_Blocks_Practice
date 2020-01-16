// https://hack.codingblocks.com/app/contests/1179/p/435

#include<iostream>
using namespace std;

int Pivotfinder(int arr[], int size)
{
	int start = 0;
	int end = size -1;
	while(start < end)
	{
		int mid = (end - start)/2 + start;
		if(mid < end && arr[mid] < arr[mid-1])
			return mid -1;
		else if(mid > start && arr[mid] > arr[mid+1])
			return mid;
		else if(arr[end] <= arr[mid])
			start = mid +1;
		else
			end = mid -1;
	}
	return -1;
}


int main() {
	int n; cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];
	cout << Pivotfinder(arr, n);
	return 0;
}
