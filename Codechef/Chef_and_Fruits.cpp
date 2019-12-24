/*
 * Solution of Problem Code: FRUITS
 * https://www.codechef.com/problems/FRUITS
 */

#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		
		int n, m, k;
		cin>>n>>m>>k;
		int diff = abs(n-m);
		if(k >= diff)
			cout<<0<<endl;
		else if(k <= diff)
			cout<<diff - k<<endl;
	}
}
