#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define gcd(x, y) __gcd(x, y)
#define f(i, a, b) for (int i = a; i < b; i++)
#define pii pair<int, int>
#define vii vector<pi>
#define pb(x) push_back(x)
#define ff first
#define ss second
#define mii map<int, int>
const int mod = 1e9 + 7, N = 1e5 + 2;




// int Books(int n , int T,int val[],int time[]) {
// 	int** dp;
// 	dp = new int*[n];
	
// 	// loop to create the table dynamically
// 	for (int i = 0; i < n; i++)
// 		dp[i] = new int[T + 1];
	
// 	// loop to initially filled the
// 	// table with -1
// 	for (int i = 0; i < n; i++)
// 		for (int j = 0; j < T + 1; j++)
// 		dp[i][j] = -1;
	
// 	knapSack(T, time, val, n, dp);

// }

// int knapSack(int W, int wt[], int val[], int n, int **dp) {

// 	if(W == 0 || n == 0) return 0;
// 	if(dp[n][W] != -1) return dp[n][W];
// 	if(wt[n-1] > W) {
// 		dp[n][W] = knapSack(W, wt, val, n-1, dp);
// 	} else {
// 		dp[n][W] = max(knapSack(W-wt[n-1], wt, val, n-1, dp) + val[n-1], 
// 	knapSack(W, wt, val, n-1, dp));
// 	}
	
// 	return dp[n][W];
// }

void sole() {
	map<char, int> mp;
	mp['1'] = 1;
	mp['v'] = 2;
	map<char, int>::iterator it;
	for(it = mp.begin(); it != mp.end(); it++) {
		char x = (*it).first;
		int y = (*it).second;
		cout<<x<<": "<<y<<endl;
	}
}

int main() {
	sole();
	int n, W;
	cin >> n >> W;
	vi w(n);
	vi cost(n);
	for (int i = 0; i < n; i++)
		cin >> w[i];
	for (int i = 0; i < n; i++)
		cin >> cost[i];
	// for(int i = 0; i<=n;i++) {
	// 	vi a;
	// 	for(int j = 0; j<=W;j++) {
	// 		if(i == 0 || j == 0) a.push_back(0);
	// 		else a.push_back(-1);
	// 	}
	// 	dp.push_back(a);
	// }
	// cout<<knapSack(W, w, cost, n);
	return 0;
}