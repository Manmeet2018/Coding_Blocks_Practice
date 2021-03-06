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


string reff = " abcdefghijklmnopqrstuvwxyz";

vector<string> v;
vector<string> :: iterator it;
void Recursion_Codes(string str, string res)
{
	if(!str[0])
	{
		v.push_back(res);
		return;
	}
	Recursion_Codes(str.substr(1), res +reff[int(str[0]-'0')]);
	if(str.length()>1)
	{
		int num = (((str[0]-'0')*10) +(str[1]-'0'));
		if(num<=26)
			Recursion_Codes(str.substr(2), res +reff[num]);
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

    string str; cin>>str;
    Recursion_Codes(str, "");
	cout << '[';
    for(it=v.begin(); it!=v.end()-1; it++)
    	cout << *it << ", ";
    cout << *it << ']';
    return 0;
}