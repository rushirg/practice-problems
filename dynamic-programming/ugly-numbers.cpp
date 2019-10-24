/*
 *Problem: https://practice.geeksforgeeks.org/problems/ugly-numbers/0
 *
 */

#include<bits/stdc++.h>
using namespace std;


unsigned long int getUglyNumber(unsigned n){
	
	unsigned long int ugly[n];
	unsigned long int i2 = 0, i3 = 0, i5 = 0;
	unsigned long int mul2 = 2, mul3 = 3, mul5 = 5;
	unsigned long int nextUgly = 1;

	ugly[0] = 1;
	for(int i=1; i<n; i++){
		nextUgly = min(mul2, min(mul3, mul5));
		ugly[i] = nextUgly;

		if(nextUgly == mul2){
			i2 += 1;
			mul2 = ugly[i2] * 2;
		}
		if(nextUgly == mul3){
                        i3 += 1;
                        mul3 = ugly[i3] * 3;
                }
		if(nextUgly == mul5){
                        i5 += 1;
                        mul5 = ugly[i5] * 5;
                }
	}
	return nextUgly;
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
	
		int n;
		cin>>n;
		cout<<getUglyNumber(n)<<endl;
	}
	return 0;
}


