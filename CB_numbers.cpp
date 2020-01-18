#include <bits/stdc++.h>
using namespace std;


bool isCBNumber(long long num)
{
	if(num==0 || num==1)
		return false;
	int ref[10] = {2,3,5,7,11,13,17,19,23,29};
	for(int i=0; i<10; i++)
	{
		if(num-ref[i] == 0)
			return true;
	}
	for(int i=0; i<10; i++)
	{
		if(num%ref[i] == 0)
			return false;
	}
	return true;
}

bool isvalid(bitset <17> &visited, int start, int end)
{
	for(int i=start; i<end; i++)
	{
		if(visited[i])
			return false;
	}
	return true;
}





void util(string s, int len)
{
	bitset<17> visited;
	int count = 0;
	for(int l =1; l <= len; l++) // len loop gives the length of substring
	{
		for(int start = 0; start <= len - l; start++)
		{
			int end = start + l;
			string sub = s.substr(start, l);
			// cout << sub << endl;
			// cout << visited << endl;
			if(isCBNumber(stoll(sub)) && isvalid(visited, start, end))
			{
				count++;
				// cout << visited << endl;
				for(int i=start; i<end; i++)
					visited[i] = 1;
			}
		}
	}
	cout << count << endl;
}



int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int len; cin >> len;
	string s; cin >> s;
	util(s, len);
	return 0;
}