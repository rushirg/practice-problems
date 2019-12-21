/*
 *Solution of Problem Code: PPSUM
 *https://www.codechef.com/problems/PPSUM
 */

#include<iostream>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		
		int D, N;
		cin>>D>>N;
		int sum = 0, tmp;
		while(D != 0){
			tmp = (N * (N+1))/2;
			D -= 1;
			N = tmp;
		}
		cout<<tmp<<endl;
	}
}
