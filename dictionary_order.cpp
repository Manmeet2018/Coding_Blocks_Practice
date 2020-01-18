// https://hack.codingblocks.com/app/contests/1179/p/362

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


void Dictionary(vector<string> &res, string s, int start, int end)
{
	if(start > end)
		return;
	if(start==end)
		res.push_back(s);
	for(int i= start; i<=end; i++)
	{
		swap(s[i], s[start]);
		Dictionary(res, s, start +1, end);
		swap(s[i], s[start]);
		// res.push_back(s);
	}
}


int main()
{
   	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<string> res;
    Dictionary(res, s, 0, s.length()-1);
    sort(res.begin(),  res.end());
    vector<string> :: iterator it;
    for(it = res.begin(); it != res.end(); it++)
    {
    	if(*it == s)
    		break;
    	cout << *it << endl;
    }
    return 0;
}