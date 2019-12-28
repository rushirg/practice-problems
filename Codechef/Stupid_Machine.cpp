/*
 * Solution of Problem Code: STUPMACH
 * 
 * Problem from December Lunchtime 2019
 * https://www.codechef.com/LTIME79B/problems/STUPMACH
 */


#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){

		ll N;
		cin>>N;
		ll tmp, min = INT_MAX, count = 0;
		for(ll i=0; i<N; i++){
			cin>>tmp;
			if(tmp < min){
				count += tmp;
				min = tmp;
			}
			else{
				count += min;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}

