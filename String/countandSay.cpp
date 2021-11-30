#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, a, b) for(int i = a; i<b; i++)

string solve(int n) {

	if(n == 1) return "1";
	if(n == 2) return "11";
	string str = "11";
	for(int i = 3; i<=n; i++) {
		string temp = "";
		str += "$";
		int len = str.length();
		int count = 1;
		for(int j = 1; j < len; j++) {
			if(str[j-1] != str[j]) {

				temp += to_string(count);
				temp += str[j-1];
				count = 1;

			} else count++;
		}
		str = temp;
	}
	return str;

}

int main() {
	int n;cin>>n;
	cout<<solve(n);
	return 0;
}