/*
 * Solution of Problem Code: DIFFSUM
 * https://www.codechef.com/problems/DIFFSUM
 */

#include<iostream>
using namespace std;

int main(){
	
	int n1, n2;
	cin>>n1>>n2;
	n1 > n2 ?cout<<n1-n2 : cout<<n1+n2; 
}
