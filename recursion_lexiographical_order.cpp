void recursiveNumber(int number, int maker_number)
{
	if(maker_number > number)
		return;
	int i = 0;
	cout << maker_number << " ";
	if(maker_number == 0)
		i = 1;
	while(i <= 9)
	{
		recursiveNumber(number, maker_number * 10 + i);
		i++;
	}
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
	int n; 
        cin >> n;
	recursiveNumber(n, 0);
	return 0;
}
