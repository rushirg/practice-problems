/*
 * Solution of Problem Code: CHEALG
 * https://www.codechef.com/LTIME79B/problems/CHEALG
 * Problem from December Lunctime 2019
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){

		string s, ans;
		cin>>s;
		int s_len = s.length();
		int count = 1, j;

		if(s_len == 1){
			cout<<"NO"<<endl;continue;
		}
		for(int i=0; i<s_len - 1; i++){
			j = i + 1;
			if(s[i] == s[j]){
				count++;continue;
			}
			else{
				ans += s[i];
				ans += 	to_string(count); count = 1;
			}
		}
		if(count == 1){
			ans += s[s_len-1];
			ans += to_string(count);
		}
		else{
			ans += s[s_len-1];
			ans += to_string(count);
		}
		if(s_len == ans.length() || s_len < ans.length())
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
		// cout<<"s: "<<s_len<<endl;
		// cout<<"n: "<<new_len<<endl;

	}
	return 0;
}

