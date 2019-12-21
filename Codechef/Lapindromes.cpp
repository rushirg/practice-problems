#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		
		string s;
		cin>>s;
		int i;
		int arr1[26]={0}, arr2[26] = {0};
		for(i=0; i<s.length()/2; i++){
			arr1[s[i] - 'a']++;
		}

		//if length is odd or even
		if(s.length() % 2 == 0)
			i = s.length()/2;
		else
			i = s.length()/2 + 1;	

		for(; i<s.length(); i++){
			arr2[s[i] - 'a']++;	
		}
		
		//check the frequency
		for(i=0; i<26; i++){
			if(arr1[i] != arr2[i]){
				cout<<"NO"<<endl; break;
			}
		}
		if(i == 26)
			cout<<"YES"<<endl;
	}
}
