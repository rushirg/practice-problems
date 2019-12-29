/*
 * Solution of Problem Code: GUESSNUM
 * From Codechef December Lunchtime 2019 
 * - https://www.codechef.com/LTIME79B/problems/GUESSNUM
 * - Reference: https://youtu.be/7OX1rqkh-ek
 */

#include<bits/stdc++.h>
using namespace std;

#define ll long long


vector<ll> findDivisor(ll n){
	
	vector<ll> divisor_list;
	for(ll i=1; i<=sqrt(n); i++){
		
		if(n % i == 0){
			if(n/i == i)
				divisor_list.push_back(i);
			else{
				divisor_list.push_back(i);
				divisor_list.push_back(n/i);
			}
		}
	}
	return divisor_list;
}


int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		ll A, M, q, d, N, count = 0;
		cin>>A>>M;
		
		vector<ll> ans, dList = findDivisor(M);
		
		/*
		for(ll i=0; i<dList.size(); i++){
			cout<<dList[i]<<endl;
		}
		*/

		for(ll i=0; i<dList.size(); i++){
			
			if((dList[i] - 1) % A == 0){
				q = (dList[i] - 1) / A;
				d = M / dList[i];
				N = q * d;	
				count += 1;
				ans.push_back(N);
			}	
		}
		cout<<count-1<<endl;
		sort(ans.begin(), ans.end());
		for(ll i=1; i<ans.size(); i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}
