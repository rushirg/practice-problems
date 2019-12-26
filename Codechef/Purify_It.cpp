/*
 * Solution of Problem Code: PRFYIT
 * https://www.codechef.com/COOK113A/problems/PRFYIT
 *
 * Reference: https://youtu.be/1tfwOjS-L2c
 */

#include<bits/stdc++.h>
using namespace std;

int arr[100000];
int main(){
	
	int t;
	cin>>t;

	while(t--){
			
		string str;
		cin>>str;

		int n = str.length(), maxBlock = 0;
		for(int i=0; i<n; i++){
			
			arr[i+1] = arr[i];
			if(str[i] == '1'){
				arr[i+1] += 1;
			}
		}

		for(int i=0; i<n; i++){
		
			for(int j=i+1; j<=n; j++){
				
				maxBlock = max(maxBlock, (i-arr[i]) + (arr[j]-arr[i]) + (n-j-(arr[n]-arr[j])));

				maxBlock = max(maxBlock,
						/* no of zero on left*/ arr[i] +
						/* no of zero on right*/ arr[n]-arr[j] +
						/* no of zero between*/ (j-i-(arr[j]-arr[i])));
			}
		}
		cout<<n-maxBlock<<endl;
	}
}
