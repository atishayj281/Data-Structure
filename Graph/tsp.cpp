#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>

int mi(vvi graph, int i, vector<bool> vis) {
	int ma = INT_MAX;
	int ans = 0;
	for(int j = 0; j<graph[i].size(); j++) {
		if(graph[i][j] != 0 and graph[i][j] < ma and  !vis[j]) {
			ma = graph[i][j];
			ans = j;
			
		}
		// cout<<graph[i][j]<<" ";
	}
	// cout<<endl;
	return ans;
}

int main() {
	int e, v;cin>>e>>v;
	vector<vector<int>> graph(v, vector<int>(v, 0));
	cout<<"Enter the edges with weight: ";
	for(int i = 0; i<e; i++) {
		int x, y, w;
		cin>>x>>y>>w;
		graph[x][y] = w;
		graph[y][x] = w;
	}
	vi ans;
	int i = 0;
	vector<bool> vis(v, false);
	int count = 1;
	do{
		
		ans.push_back(i);
		int next_edge = mi(graph, i, vis);
		i = next_edge;
		vis[i] = true;
		
		count++;
	} while(count <= v);
	for(int i: ans) {
		cout<<i<<"->";
	}
	return 0;
}