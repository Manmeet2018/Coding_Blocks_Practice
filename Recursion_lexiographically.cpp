// // Created by Manmeet Singh Parmar
#include <bits/stdc++.h>
using namespace std;

void PrintRecursivelyLexiographically(int start, int n)
{
	if(start > n)
		return;
	cout << start << " ";
	int i = 0;
	if(start==0)
		i = 1;
	for(; i<=9; i++)
		PrintRecursivelyLexiographically(start*10 + i, n);
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; cin >> n;
	// cout << 0 <<" ";
	PrintRecursivelyLexiographically(0, n);
	return 0;
}
