/*
 *Solution of Problem Code: CHNGIT
 *https://www.codechef.com/COOK113B/problems/CHNGIT/
 */

#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){

		int n, tmp;
		cin>>n;
		int arr[100] = {0};
		for(int i=0; i<n; i++){
			cin>>tmp;
			arr[tmp]++;
		}
		int max = 0;
		for(int i=0; i<100; i++){
			if(arr[i] > max){
				max = arr[i];
			}
		}
		cout<<n - max<<endl;
	}
	return 0;
}

