/*
Solution of Problem Code: MINIAND
https://www.codechef.com/PLIT2020/problems/MINIAND
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,n;
    cin>>t;
    while(t--){

        cin>>n;
        int arr[n+1], tmp[n+1], even = 0;
        tmp[0] = 0;
        for(int i=1; i<=n; i++){
            cin>>arr[i];
            if((arr[i] % 2) == 0)
                even++;
            tmp[i] = even;
        }

        int q;
        cin>>q;
        while(q--){
            int l, r;
            cin>>l>>r;
            if((tmp[r] - tmp[l-1]))
                cout<<"EVEN"<<endl;
            else
                cout<<"ODD"<<endl;
        }
    }
}