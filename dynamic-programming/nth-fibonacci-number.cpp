/*
Nth Fibonacci Number
Problem: https://practice.geeksforgeeks.org/problems/nth-fibonacci-number/0
Source: https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

/*// Method 1 - Recursion
ll nthFibonacci(ll n){
	// Time Complexity: T(n-1) + T(n-2) which is exponential

	if(n <= 1)
		return n;
	return nthFibonacci(n-1) + nthFibonacci(n-2);
}
*/

/*// Method 2 - Dynamic Programming
ll nthFibonacci(ll n){
	 Here we define an array of size n+2 and store the result of new element
	by performing addition on previous two elements

	int arr[n+2]; // 2 extra elements to store base cases for 0 and 1
	arr[0] = 0; arr[1] = 1;
	for(int i=2; i<=n; i++)
		arr[i] = arr[i-1] + arr[i-2];
	return arr[n];
}
*/

/*// Method 3 -Dynamic Programming (Space optimization)
ll nthFibonacci(ll n){
	// Time Complexity: O(n), Space Complexity: O(1)
	// Here we do not store all the previous elements instead we just store
	// the recent two which are relevent and iterate till n

	int a = 0, b = 1, c;
	if(n == 0)
		return a;
	for(int i=2; i<=n; i++){

		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
*/


/*// Method 4 - Using power of matrix[[1, 1], [1, 0]]
// The idea here is, to find the nth fibonacci number we multiply
// the matrix [[1,1],[1,0]] with itself n-1 times to get the desirec value at f[0,0]
// Time Complexity: O(n), Space Complexity: O(1)

void multiply(int f[2][2], int g[2][2]);

void power(int f[2][2], int n);

int nthFibonacci(int n){

	int f[2][2] = {{1,1},{1,0}};
	if(n == 0)
		return 0;
	power(f, n-1);

	return f[0][0];
}

void multiply(int f[2][2], int g[2][2]){
	int x = f[0][0]*g[0][0] + f[0][1]*g[1][0];
	int y = f[0][0]*g[0][1] + f[0][1]*g[1][1];
	int w = f[1][0]*g[0][0] + f[1][1]*g[1][0];
	int z = f[1][0]*g[0][1] + f[1][1]*g[1][1];

	f[0][0] = x;
	f[0][1] = y;
	f[1][0] = w;
	f[1][1] = z;
}

void power(int f[2][2], int n){
	int g[2][2] = {{1,1},{1,0}};
	for(int i=2; i<=n; i++){
		multiply(f, g);
	}

}*/


/*// Method 5 - Modified the power of matrix method
// This is modified version of the method 4
// we recursively call to get the f till n/2
// and then multiply it with itself
// if n is odd we need to multiply it one more time with g
// Time Complexity: O(Log(n))


void multiply(int f[2][2], int g[2][2]);

void power(int f[2][2], int n);

int nthFibonacci(int n){

	int f[2][2] = {{1,1},{1,0}};
	if(n == 0)
		return 0;
	power(f, n-1);

	return f[0][0];
}

void multiply(int f[2][2], int g[2][2]){
	int x = f[0][0]*g[0][0] + f[0][1]*g[1][0];
	int y = f[0][0]*g[0][1] + f[0][1]*g[1][1];
	int w = f[1][0]*g[0][0] + f[1][1]*g[1][0];
	int z = f[1][0]*g[0][1] + f[1][1]*g[1][1];

	f[0][0] = x;
	f[0][1] = y;
	f[1][0] = w;
	f[1][1] = z;
}

void power(int f[2][2], int n){
	if(n == 0 || n == 1)
		return;
	int g[2][2] = {{1,1},{1,0}};

	power(f, n/2);
	multiply(f, f);

	if(n%2 != 0)
		multiply(f, g);
}*/



int main(){

	int t;
	cin>>t;
	while(t--){

		ll n;
		cin>>n;
		cout<<nthFibonacci(n)<<endl;
	}
	return 0;
}
