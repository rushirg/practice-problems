/*
 *Solution of Problem Code: AMR15A
 *https://www.codechef.com/problems/AMR15A
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int tmp, even = 0, odd = 0;
	while(n--){
		cin>>tmp;
		tmp % 2 == 0 ? even++ : odd++;
	}
	if(even > odd)
		cout<<"READY FOR BATTLE"<<endl;
	else
		cout<<"NOT READY"<<endl;
}
