/*
 * Solution of Problem Code: RECIPE
 * https://www.codechef.com/problems/RECIPE
 */

#include<iostream>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){

		//number of ingredients
		int n;
		cin>>n;

		int arr[n];
		int min = 1000;

		//input ingredient quantity and find min quantity of an item
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i] < min)
				min = arr[i];
		}

		// check quantity which is divisible by min or less than min
		bool flag = false;
		for(int i=min; i>0; i--){

			int j;
			for(j=0; j<n; j++){
				if(arr[j] % i != 0 ){
					break;
				}
			}
			if(j == n){
				min = i;
				flag = true;
				break;
			}

		}
		
		// if no min quantity
		if(!flag)
			min = 1;

		//print output
		for(int i=0; i<n; i++)
			cout<<arr[i]/min<<" ";
		
		cout<<endl;
	}
}
