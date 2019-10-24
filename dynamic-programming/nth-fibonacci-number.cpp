/*
 *Problem: https://practice.geeksforgeeks.org/problems/nth-fibonacci-number/0
 *
 */

#include<bits/stdc++.h>
using namespace std;

unsigned long int nthFibonacci(int n){
	
	unsigned long int a[1001]={0};
	a[1] = 1, a[2] = 1;
	for(int i=3; i<=n; i++){
		a[i] = (a[i-1] + a[i-2])%1000000007;
	}
	return a[n];
}

/*
 * Space optimized version
 * 
 *unsinged long int nthFibonacci( int n ){
 	
 	unsigned long int a = 0, b = 1, c;
	if(n == 0)
		return a;
	for(int i=2; i<=n; i++){
		
		c = a + b;
		a = b;
		b = c;
	}
	return b;
 }
 *
 *
 */

int main(){

	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		cout<<nthFibonacci(n)<<endl;
	}
	return 0;
}
