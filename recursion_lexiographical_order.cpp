#include <bits/stdc++.h>
using namespace std;

void print_lexiographicall(int n, int a)
{
    if(a > n)
        return;
    cout << a << " ";
    int i = 0;
    if (a==0)
        i = 1;
    for(; i<=9; i++)
        print_lexiographicall(n, a*10 + i);
}






int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    print_lexiographicall(n, 0);
    
}