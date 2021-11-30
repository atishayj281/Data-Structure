#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, a, b) for(int i = a; i<b; i++)

bool solve(string A, string B, string C) {
	if(A.length() + B.length() != C.length()) return false;
	bool isA = true;
	string s1 = "", s2 = "";
	int n = C.length();
	for(int i = 0; i<n; i++){
		if(isA) {
			s1 += C[0];
			C = C.substr(1);
			isA = false;
		} else {
			s2 += C[0];
			C = C.substr(1);
			isA = true;
		}
	}
	cout<<s1<<" "<<s2<<endl;
	if(s1 == A && s2 == B) return true;
	if(s2 == A && s1 == B) return true;
	return false;
}

int main() {
	string s1, s2, s3;
	cin>>s1>>s2>>s3;
	cout<<solve(s1, s2, s3);
	return 0;
}