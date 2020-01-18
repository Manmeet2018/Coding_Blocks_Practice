// https://hack.codingblocks.com/app/contests/1179/p/338

// Created by Manmeet Singh Parmar
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

#define FOR(i, x, n) for(ll i=x; i<(n); i++)
#define F0R(i, n)  for(ll i=0; i<(n); i++)
#define FORd(i, x, n) for(ll i = (n)-1; i >= x; i--)
#define F0Rd(i,n) for(ll i = (n)-1; i >= 0; i--)
#define FOR_B_l(i,n) for(ll i = 0; i < (1LL << n); i++)
#define FOR_B_r(i,n) for(ll i = 0; i < (1LL >> n); i++) // typecasting of 1 in long long


#define l_rot_n(a, n) (aLL << n) // type casting of a in long long and lef rotation of a with n;

#define r_rot_n(a, n) (aLL >> n)

#define mod 1000000007
#define pi 2acos(0.0)
#define MP make_pair
#define PB push_back
#define EB emplace_back // its's faster than push_back
#define F first
#define S second
#define sz(x) (int)(x).size()
#define what_is(x) cerr << #x << "is" << x << endl;
#define gcd(a, b) __gcd(num1 , num2)

int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; 
    cin >> n;
    ll arr[n];
    for(ll i=0; i<n; ++i)
    	cin >> arr[i];
    stack <ll> index_st;
    ll max_area = INT_MIN;
    ll area = 0;
    ll i =0;
    while(i < n)
    {
    	if(index_st.empty() || arr[index_st.top()] <= arr[i])
    		index_st.push(i++);
    	else if(arr[index_st.top()] > arr[i])
    	{
    		ll top_idx =index_st.top();
    		index_st.pop();
    		if(index_st.empty())
    		{
    			// cout << "1212";
    			area = arr[top_idx] * i;
    		}
    		else
    		{
    			area = arr[top_idx] *(i - index_st.top() - 1);
    		}
    		cout << area << endl;
    	}
    	max_area = max(area, max_area);
    }
    // cout << max_area << endl;
    while(!index_st.empty())
    {
    	ll top_idx = index_st.top();
    	// cout << top_idx << endl;
    	index_st.pop();
    	if(index_st.empty())
    		{
    			// cout << "1212";
    			area = arr[top_idx] * n;
    		}
    		else
    		{
    			area = arr[top_idx] *(n - index_st.top() - 1);
    		}
    		cout << area << endl;
    		max_area = max(area, max_area);
    }
    cout << max_area << endl;
    return 0;
}