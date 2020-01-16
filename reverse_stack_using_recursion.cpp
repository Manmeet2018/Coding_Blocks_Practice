// https://hack.codingblocks.com/app/contests/1179/p/418


#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack <int> &st, int val)
{
	if(!st.empty())
	{
		int a = st.top();
		st.pop();
		InsertAtBottom(st, val);
		st.push(a);
	}
	else
	{
		st.push(val);
		return ; 
	}
}


void reverse(stack <int> &st)
{
	if(!st.empty())
	{
		int a = st.top();
		st.pop();
		reverse(st);
		InsertAtBottom(st, a);
	}
}

int main() {
	int n; cin >> n;
	stack <int> st;
	while(n--)
	{
		int a; cin >> a;
		st.push(a);
	}
	reverse(st);
	while(!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}
	return 0;
}
